#include <stdio.h>
#include <stdlib.h>
#include"location.h"
#include<string.h>

void existance(lct tab[],int n)
{
    int cas;
    int i=0,exist;
    date d1,d2;
    char nom[20];
    int p;

    printf("****************recherche_menu********************\n");
    printf("\n selon quel champs afectez_vous votre recherche \n");

    printf("***************************************************\n");
    printf("\n 1:par nom de locataire\n");

    printf("***************************************************\n");
    printf("\n 2:par date de debut \n");

    printf("***************************************************\n");
    printf("\n 3:par date de fin\n");

    printf("***************************************************\n");
    printf("\n 4 : par appartement\n ");

    printf("***************************************************\n");
    scanf("%i",&cas);
    switch (cas)
    {
        case 1:
            printf("donner un nom sous forme (Nom-Prenom)\n");
            scanf("%s",nom);
            while(valider_nom(nom)==1)
            {
                printf("donner un nom sous forme (Nom-Prenom)\n");
                scanf("%s",nom);
            }

            while((strcmp(tab[i].namel,nom)!=0)&&(i<n))
            {
                i++;
            }
            if(i==n)
            exist=-1;
            else
            exist=i;
            break;


        case 2:
            printf("donner une date de debut\n");
            saisirdate(&d1);
            while(valadite_date(d1)==0)
            {
                printf("donner une date de debut\n");
                saisirdate(&d1);

            }
            while((i<n)&& (date_equal_date(d1,tab[i].dd))==0 )
            {
                i++;
            }
            if (i==n)
            exist=-1;
            else exist= i;
            break;

    case 3:
            printf("donner une date de fin\n");
            saisirdate(&d2);
            while(valadite_date(d2)==0)
            {
                printf("donner une date de fin\n");
                saisirdate(&d2);
            }
            while((i<n)&& (date_equal_date(d2,tab[i].df))==0 )
            {
                i++;
            }
            if (i==n)
            exist=-1;
            else
                exist= i;
            break;

        case 4:
            printf("donner l'id un appartement\n");
            scanf("%i",&p);

            while((i<n)&& (tab[i].a.id!=p))
            {
                i++;
            }
            if (i==n)
            {
                exist=-1;
            }
            else
            {
                exist= i;
            }
            break;


        }
        if (exist==-1)
        printf("element n'existe pas\n");
        else
        printf("element existant\n"); ;}
int disponibilte(lct tab[],int n,lct l)
{
    int i=0,k,j;
    //tri selon ordre decroissant de date de fin de la location est necessaire pour donner la date ou l'appartement est disponible
    for (k=1;k<=n;k++)
{
    for(j=0;j<n-1;j++)
{
    if (date_sup_date(tab[j].df,tab[j+1].df)!=1)
{
    permuter(&tab[j],&tab[j+1]);
}
}
}

    while((i<n)&&(sameapt(l.a,tab[i].a)==0))
    {
        i++;
    }
    if ((i==n)||(date_sup_date(l.dd,tab[i].df))||(date_sup_date(tab[i].dd,l.df)))
        return -1;
    else
    { printf("l'appartemnt sera disponible aprés :      ");
     afficher_date(tab[i].df);
     printf("\n");
     return 0;

    }

}
int visitor_existance(locataire tab[],int n,locataire lo)
{
    int i=0;
    while((i<n)&&(tab[i].cnd!=lo.cnd))
    {
        i++;
    }
    if (i==n)
    return -1;
    else
    return 1;
}
void recherche(lct tab[],int n)
{
    int cas,rep;


    date d1,d2;
    char nom[20];
    int p,i;

    printf("****************recherche_menu********************\n");
    printf("\n selon quel champs afectez_vous votre recherche \n");

    printf("***************************************************\n");
    printf("\n 1:par nom de locataire\n");

    printf("***************************************************\n");
    printf("\n 2:par date de debut \n");

    printf("***************************************************\n");
    printf("\n 3:par date de fin\n");

    printf("***************************************************\n");
    printf("\n 4 : par appartement\n ");

    printf("***************************************************\n");
    scanf("%i",&cas);
    switch (cas)
    {
        case 1:
        printf("donner un nom(Nom-Prenom)\n");
        scanf("%s",nom);
        while(valider_nom(nom)==1)
        {
            printf("donner un nom(Nom-Prenom)\n");
            scanf("%s",nom);

        }
        printf("les indices dont la fiche de locations vous recherchez sont \n ");
        for( i=0;i<n;i++)
        {
            if (strcmp(tab[i].namel,nom)==0)
            {
                printf("%i \n",i);
                printf("vouler vous afficher la fiche de location correspondant \n 1:oui\n 2:non\n");
                scanf("%i",&rep);
                if (rep==1)
                    afficher_fiche(tab[i]);

            }
        }
        break;
        case 2:
        printf("donner une date de debut\n");
        saisirdate(&d1);
        while(valadite_date(d1)==0)
        {
            printf("donner une date de debut\n");
            saisirdate(&d1);
        }
        printf("les indices dont la fiche de locations vous recherchez sont \n ");
        for( i=0;i<n;i++)
        {
            if (date_equal_date(tab[i].dd,d1)==0)
                {
                    printf("%i\n",i);
                    printf("vouler vous afficher la fiche de location correspondant \n 1:oui\n 2:non\n");
                    scanf("%i",&rep);
                    if (rep==1)
                        afficher_fiche(tab[i]);
                }
        }

        break;
        case 3:
        printf("donner une date de debut\n");
        saisirdate(&d2);
        while(valadite_date(d2)==0)
        {
           printf("donner une date de debut\n");
           saisirdate(&d2);
        }
        printf("les indices dont la fiche de locations vous recherchez sont \n ");
        for( i=0;i<n;i++)
        {
            if (date_equal_date(tab[i].df,d2)==0)
                {
                    printf("%i\n",i);
                    printf("vouler vous afficher la fiche de location correspondant \n 1:oui\n 2:non\n");
                    scanf("%i ",&rep);
                    if (rep==1)
                        afficher_fiche(tab[i]);

                }
        }
        break;

        case 4:
            printf("donner l'id d'un appartement\n");
            scanf("%i",&p);
            printf("les indices dont la fiche de locations vous recherchez sont \n");

            for( i=0;i<n;i++)
            {
                if (tab[i].a.id==p)
                    {
                        printf(" \n %i \n",i);
                        printf("vouler vous afficher la fiche de location correspondant \n 1:oui\n 2:non\n");
                        scanf("%i",&rep);
                        if (rep==1)
                            afficher_fiche(tab[i]);

                    }


            }
        }
}
