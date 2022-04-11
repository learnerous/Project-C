#include"location.h"
#include <stdio.h>
#include <stdlib.h>

void admin_menu(lct t[],int *n)
{int choice ,b,i,choix;
int j;
/*login();
while((j<5)&&(login()==0))
{login();
j++;
printf("il vous reste %i essais",5-j-1);}*/
printf("\t\t La musique c'est de bruit qui pense \n");
printf("si vous voulez ecoutez de la musique taper 1 sinon taper 2\n");
scanf("%i",&choix);
if(choix==1)
    music();
else
    printf("vous ecoutez de la musique a tout moment \n");

FILE *f1;
f1=fopen("location.txt","rt");
    if (f1==NULL)
    {
        printf("fichier inexistant \n");
    }
    else
    {
        while (!feof(f1))
        {
            fscanf(f1,"%s %d %d %d %d %d %d %d %f %s",t[*n].namel,&t[*n].dd.jour,&t[*n].dd.mois,&t[*n].dd.annee,&t[*n].df.jour,&t[*n].df.mois,&t[*n].df.annee,&t[*n].a.id,&t[*n].a.surface,t[*n].a.disc);
            (*n)++;
        }

    }
while(1==1)
    {
        printf("**************admin_menu*************\n");

        printf("1 ajouter\n");

         printf("***************************************\n");
        printf("2 afficher \n");

         printf("***************************************\n");
        printf("3 verifier l'existance\n");

         printf("***************************************\n");
        printf("4 chercher toutes les occurrences\n ");

         printf("***************************************\n");
        printf("5 ajouter \n");

         printf("***************************************\n");
        printf("6 supprimer \n");


         printf("***************************************\n");
       printf("7 mise a jour\n ");
         printf("***************************************\n");

        printf("8 trier \n");
        printf("*****************************************\n");
        printf("9 sauvgarder\n ");
        printf("******************************************\n");
        printf(" 10 afficher agenda 2022 \n");
        printf("******************************************\n");
        printf("11 ecouter de la musique \n");
         printf("****************************************\n");
        printf("12 quitez  \n");
        printf("******************************************\n");
        scanf("%i",&choice);
        switch(choice)
        {

        case 2:
        if (n==0)
        printf("aucun element a afficher \n");
        else
        afficher(t,*n);
        break;
        case 3:
        existance(t,*n);
        break;
        case 6:
        supprimer(t,*n);
        break;
        case 7:
        printf("quelle fiche de location voulez vous la modifier \n");
        scanf("%i",&i);
        change(&t[i]);
        case 1:
        do
                    {
                        ajouter(t,*n);
                        (*n)++;
                        printf("\n\n\nSi vous voulez entrer un autre article taper sur 1:\n");
                        scanf("%i",&b);

                    }while(b==1);
            break;
        case 8:
        trier(t,*n);
        break;
        case 9:
          f1=fopen("location.txt","w");
          for(j=0;j<*n;j++)
          {
              fprintf(f1,"%s %d %d %d %d %d %d %d %f %s",t[j].namel,t[j].dd.jour,t[j].dd.mois,t[j].dd.annee,t[j].df.jour,t[j].df.mois,t[j].df.annee,t[j].a.id,t[j].a.surface,t[j].a.disc);
            fclose(f1);
          }
          exit(0);
          break;

        case 12:
        exit(0);
        break;
        case 4:
            recherche(t,*n);
            break;
        case 11:
            music();
        case 10:
            agenda();
            system("color 6");


        }
    }}
