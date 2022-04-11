#include<stdio.h>
#include<windows.h>
void agenda()
{
    char *mois[]={"janvier", "fevrier","mars","avril","mai","juin","juillet","aout","septembre","octobre","novembre","decembre"};
    int jpm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,jourto,jps=0,contaire;
    for(i=0;i<12;i++)
    {
        printf("\n\n\n -------------------------------%s-------------------------------------\n",mois[i]);
        printf("\n   samedi   dimanche  lundi   mardi  mercredi  jeudi  vendredi \n\n");
        for(contaire=1; contaire<=jps;contaire++)
        {
            printf("        ");
        }
        jourto=jpm[i];
        for(j=1;j<=jourto;j++)
        {
            printf("%8d",j);
            jps++;
            if(jps>6)
            {
                jps=0;
                printf("\n");
            }
        }
    }
    printf("\n\n");

}
