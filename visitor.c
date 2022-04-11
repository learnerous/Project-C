#include"location.h"
#include <stdio.h>
#include <stdlib.h>
void ajouter_un_locataire(locataire tab[],int n)
{
int e;

locataire lo;
printf("vous etes le bienvenue dans notre enterprise \n");
printf("session de saisir vos donnees\n");
saisir_locataire(&lo);


e=visitor_existance(tab,n,lo);
if(e==-1)

{
    printf("client n %i",n);
tab[n]=lo;
printf("merci d'etre parmis nous\n");
}

else
{
    printf("bon retour a notre societe \n");
}
}
