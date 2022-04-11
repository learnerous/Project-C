#include <stdio.h>
#include <stdlib.h>
#include"location.h"
#include <windows.h>
#include <conio.h>
#include<time.h>


int main()
{   system("color F0");
    int choice,n=0,m=0;

    lct t[50];
    locataire tab[30];
    int choice1=12 ,b,i,choix;
    FILE * f1;
    int choice2,e ;
    lct l;
    int j=0;
    FILE *f2;
    int k;
    int log;
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo=localtime(&rawtime);
    printf("temps et date actuelle : \t\t\t\t\t\t%s",asctime(timeinfo));
    printf("\t\t\t************you are welcome************\n");
    getch();





        system("cls");
        printf("1-   admin\n");
        printf("2-   client\n");
        printf("0-   Quitter\n");

        do
            {
                printf("\nSaisir votre choix (entre 0 et 2) : ");
                scanf("%d",&choice);
            }while ( ( choice < 0 ) || ( choice > 2 ) );
        switch (choice)
        {case 1:{



            system("color 6");

            log=login();
            while((log==1)&&(j<3))
            {   system("cls");
                log=login();
                printf("session d'ecrire vos donner correctement    il vous reste %i tentatives  \n",3-j);
                j++;
            }

            while(j==3)
                exit(0);
            system("cls");

            system("start C:\\Users\\21626\\Desktop\\123.exe ");//à mettre en commentaire sur un autre pc



            printf("\t\t La musique c'est de bruit qui pense \n");
            printf("si vous voulez ecoutez de la musique taper 1 sinon taper une autre bouton \n");
            scanf("%i",&choix);
            if(choix==1)
                music();// a mettre en commentaire sur un autre pc
            else
                printf("vous ecoutez de la musique a tout moment \n");


            f1=fopen("location.txt","r");
            if (f1==NULL)
            {
                printf("fichier inexistant \n");
            }
            else
            {
                while (!feof(f1))
            {
                fscanf(f1,"%s %d %d %d %d %d %d %d %f %s ",t[n].namel,&t[n].dd.jour,&t[n].dd.mois,&t[n].dd.annee,&t[n].df.jour,&t[n].df.mois,&t[n].df.annee,&t[n].a.id,&t[n].a.surface,t[n].a.disc);
                n++;
            }


            }
            system("cls");
            while(1==1)
                {

                printf("\n\t\t\t**************admin_menu*************\n");

                printf("\t\t\t1 ajouter\n");

                printf("\t\t\t***************************************\n");
                printf("\t\t\t2 afficher \n");

                printf("\t\t\t***************************************\n");
                printf("\t\t\t3 verifier l'existance\n");

                printf("\t\t\t***************************************\n");
                printf("\t\t\t4 chercher toutes les occurrences\n ");



                printf("\t\t\t***************************************\n");
                printf("\t\t\t5 supprimer \n");


                printf("\t\t\t***************************************\n");
                printf("\t\t\t6 mise a jour\n ");
                printf("\t\t\t***************************************\n");

                printf("\t\t\t7 trier \n");
                printf("\t\t\t***************************************\n");
                printf("\t\t\t8 sauvgarder\n ");
                printf("\t\t\t***************************************\n");
                printf("\t\t\t9 afficher agenda 2022 \n");
                printf("\t\t\t***************************************\n");
                printf("\t\t\t10 ecouter de la musique \n");
                printf("\t\t\t***************************************\n");//pas valable pour un autre pc;
                printf("\t\t\t0 quitez  \n");
                printf("\t\t\t***************************************\n");


                scanf("%i",&choice1);
                switch(choice1)
                {

                case 2:
                { system("cls");
                    system("cls");if (n==0)
                    printf("aucun element a afficher \n");
                else
                    afficher(t,n);}

                break;
                case 3:
                   {

                    system("cls");
                    existance(t,n);}
                break;
                case 5:
                   {
                    system("cls");
                    supprimer(t,n);
                    n--;}
                break;
                case 6:

                {
                    system("cls");
                    printf("quelle fiche de location voulez vous la modifier \n");
                scanf("%i",&i);
                change(t,n,&t[i]);}
                break;
                case 1:
                {do
                    { system("cls");
                        ajouter(t,&n);

                        printf("\n\n\nSi vous voulez entrer un autre article taper sur 1:\n");
                        scanf("%i",&b);

                    }while((b==1)&&(n<50));
                    system("cls");
                    }

                break;

                case 7:
                    {
                        system("cls");
                        trier(t,n);}
                    break;
                case 8:
                    { system("cls");
                        f1=fopen("location.txt","w+");
                    for(i=0;i<n;i++)
                    {
                        fprintf(f1,"%s %d %d %d %d %d %d %d %f %s ",t[i].namel,t[i].dd.jour,t[i].dd.mois,t[i].dd.annee,t[i].df.jour,t[i].df.mois,t[i].df.annee,t[i].a.id,t[i].a.surface,t[i].a.disc);

                    }
                    fclose(f1);
                    }
                    break;

                    case 0:
                    {     f1=fopen("location.txt","w+");
                    for(i=0;i<n;i++)
                    {
                        fprintf(f1,"%s %d %d %d %d %d %d %d %f %s ",t[i].namel,t[i].dd.jour,t[i].dd.mois,t[i].dd.annee,t[i].df.jour,t[i].df.mois,t[i].df.annee,t[i].a.id,t[i].a.surface,t[i].a.disc);

                    }
                    fclose(f1);
                        exit(0);}
                    break;
                    case 4:
                    { system("cls");
                      recherche(t,n);}
                    break;

                    case 10:
                    {   system("cls");
                        music();}
                    break;
                    case 9:
                    { system("cls");
                      agenda();
                    }
                    break;


                    }
                     }
                      }

                    break;
            case 2:
                {system("color 7");
                system("cls");


                f2=fopen("locataire.txt","rt");
                if(f2==NULL)

                {
                    printf("file inexistant\n\n");

                }
                else
                {
                    while(!feof(f2))
                {
                    fscanf(f2,"%d %s ",&tab[m].cnd,tab[m].name);
                    m++;
                }

                }
            while(1==1)
           {
            printf("\n\t\t\t****************visiteur_menu****************\n");
            printf("\t\t\t1 devenir un fidele client dans notre enterprise \n");
            printf("\t\t\t*********************************************\n");

            printf("\t\t\t2 rechercher si un appartement est disponible\n");
            printf("\t\t\t*********************************************\n");

            printf("\t\t\t0 sortir de programme \n");
            printf("\t\t\t*********************************************\n");



            scanf("%i",&choice2);
            switch(choice2)

            {case 1:

            {  system("cls");
                ajouter_un_locataire(tab,m);
            m++;
            }

            break;
            case 2:
            { system("cls");
                l=new_location();
            e=disponibilte( t,n, l);
            if (e==-1)
            printf("tu peux louer cet appartement \n");
            else
            printf("appartement indisponible \n");}
            break;
            case 0:

            { system("cls");
                f2=fopen("locataire.txt","w+");
           for(k=0;k<=m;k++)
           {
               fprintf(f2,"%d %s ",tab[k].cnd,tab[k].name);


           }
           fclose(f2);
                exit(0);}
                break;



        break;
        }
        }
        }


        break;
        case 0:
        {
            exit(0);
        }
        break;
        }


        return 0;



    }
