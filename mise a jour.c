#include "location.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ajouter(lct tab[],int * n)
{lct l;
int i=*n,choix;

printf("la fiche de location n:%i \n",i);
l=new_location();
if (disponibilte(tab,*n,l)==-1)
{
     if (surface_correspondance(tab,*n,l)==0)
       {

        tab[*n]=l;
        (*n)++;
        }

     else
       {

        printf("pas de correspondance au niveau de surface : \n vous devez remplir la  fiche de location de nouveau \n ");
        ajouter(tab,n);}



}
else
{printf("comme l'appartement n'est disponible que apres la date notee precedament \n");
 printf("voulez vous remplir la fiche de nouveau en changeant \n");
 printf(" la date de debut par la date notee precedament ajoutee d'un jour ?\n");
 printf("saisir 1: si oui,2:sinon\n");
 scanf("%i",&choix);
 switch(choix)
 {
 case 1:
    ajouter(tab,n);
    break;
 case 2:
    printf("si vous voulez louer un autre appartement remplir une nouvelle fiche \n");

 }
}
}
void supprimer (lct tab[],int n)
{int rep ,rep2,i=0,k,h,j,indice,identifiant ;
char nom[20];
printf( "voulez vous suprimer a partir d'un passé \n 1-oui \n 2-non \n");
scanf("%i",&rep);
if(rep==1)
{
    printf("donner un indice \n");
    scanf("%i",&indice );
    for( j=indice;j<n;j++)
    {
        tab[j]=tab[j+1];
    }
}
else
{ // tri selon ordre croissant de la date de fin de location est necessaire pour supprimer la plus ancienne fiche
      for ( k=1;k<=n;k++)
{
    for( h=0;h<n-1;h++)
{
    if (date_sup_date(tab[h].df,tab[h+1].df)==1)
{
    permuter(&tab[h],&tab[h+1]);
}
}
}
    printf("on va faire un recherche selon le nom de locataire ou l'identifiant d'appartement \n puis on supprime la  fiche de location \n");
    printf("1 pour nom \n 2 pour l'identifiant \n ");
    scanf("%i",&rep2);
    switch(rep2)
    {
    case 1:
        printf("donner un nom (Nom_Prenom) \n");
        scanf("%s",nom);
        while(valider_nom(nom)==1)
        {
           printf("donner un nom (Nom_Prenom) \n");
           scanf("%s",nom);
        }
        while ((strcmp(tab[i].namel,nom)!=0)&&(i<n))
        {
            i++;
        }
        if(i==n)
            printf("element inexistant \n");
        else
        {
            for( j=i;j<n;j++)
            {
              tab[j]=tab[j+1];
            }
        }
        break;
    case 2:
         printf("donner l'identifiant \n");
        scanf("%i",&identifiant);
        while ((identifiant!=tab[i].a.id)&&(i<n))
        {
            i++;
        }
        if(i==n)
            printf("element inexistant \n");
        else
        {
            for( j=i;j<n;j++)
            {
              tab[j]=tab[j+1];
            }
        }
        break;

    }
}
}
void change(lct tab[],int n,lct *l)
{int reponse;
char name[20];
date d1,d2;
apt ap;
lct test;
test=*l;

printf (" quelle est la modification qui vous voulez affecter\n");
printf(" 1 pour nom \n 2pour date de debut \n 3 pour date de fin \n 4 pour l'appartement \n");
scanf("%i",&reponse);
if (reponse==1)
{
printf("donner un nouveau nom(Nom-Prenom)\n");
scanf("%s",name);
while(valider_nom(name)==1)
{
    printf("donner un nouveau nom(Nom-Prenom)\n");
    scanf("%s",name);
}
strcpy(l->namel,name);


}
else if (reponse==2)
{printf("donner une nouvelle date de debut \n");
saisirdate(& d1);
test.dd=d1;
if (disponibilte(tab,n,test)==-1)
{
    l->dd=d1;
}
else
    printf("date indisponible pour cette fiche de location \n");


}
else if (reponse==3)
{printf("donner un nouvelle date de fin\n ");
saisirdate(&d2);
test.df=d2;
if (disponibilte(tab,n,test)==-1)
{
    l->df=d2;
}
else
    printf("date indisponible pour cet fiche de location \n");

}
else if (reponse==4)
{printf("donner un nouveau  appartement\n");
saisir_appartement(&ap);
test.a=ap;
if (disponibilte(tab,n,test)==-1)
{
    l->a=ap;
}
else
    printf("appartement indisponible \n");

}
}
