#include<stdlib.h>
#include<stdio.h>
#include"location.h"

void  saisir_appartement (apt *p )
 {

 printf("donner l'id d'appartement (!=0)\n");
 scanf("%i",&p->id);
 fflush(stdin);
 while (p->id<=0)
 { printf("donner l'id d'appartement (!=0)\n");
 scanf("%i",&p->id);
 fflush(stdin);

 }


 printf("donner la surface d'appartement\n");
 scanf("%f",&p->surface);
 fflush(stdin);
 while(surface_valide(p->surface)==1)
 {
     printf("donner une surface valide \n");
     scanf("%f",&p->surface);
     fflush(stdin);

 }
 printf("donner une discription de l'appartement \n");
 scanf("%s",p->disc);



 }
 void saisirdate(date *d)
{
printf("donner un jour\n");
scanf("%i",&d->jour);
fflush(stdin);
printf("+++++++++++++\n");
printf("donner une mois\n");
scanf("%i",&d->mois);
fflush(stdin);
printf("+++++++++++++++\n");
printf("donner une annee\n");
scanf("%i",&d->annee);
fflush(stdin);

}


lct new_location()

{
    lct l;

    printf("donner le nom de locataire (Nom-Prenom) \n");
    scanf("%s",l.namel);
    while(valider_nom(l.namel)==1)
    {
    printf("donner le nom de locataire (Nom-Prenom) \n");
    scanf("%20s",l.namel);
    }
    printf ("donner date de debut de location \n");
    saisirdate(&l.dd);
    while (valadite_date(l.dd)==0)
    {
        printf("priere de donner une date valide\n");
        printf ("donner date de debut de location\n ");
        saisirdate(&l.dd);
        }
    printf("donner date de fin de location \n");
    saisirdate(&l.df);
    while ((valadite_date(l.df)==0)||((valadite_date(l.df)==1)&&(date_sup_date(l.dd,l.df)==1)))

    {
        printf("priere de donner une date valide\n");
        printf ("donner date de fin de location\n ");
        saisirdate(&l.df);
        }

    printf("identifier l'appartement\n");
    saisir_appartement(&l.a);
    return l;
    }
void saisir_locataire( locataire *lo)
{
    printf("donner votre nom (Nom-Prenom) \n");
    scanf("%s",lo->name);
    while(valider_nom(lo->name)==1)
    {
        printf("donner votre nom (Nom-Prenom) \n");
    scanf("%s",lo->name);
    }

    printf("donner le numero de votre cin \n");
    scanf("%i",&lo->cnd);
    fflush(stdin);
    while(lo->cnd<=0)
    {
         printf("donner le numero de votre cin \n");
    scanf("%i",&lo->cnd);
    fflush(stdin);

    }
}
