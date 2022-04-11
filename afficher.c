#include"location.h"
#include<stdio.h>

void afficher_date(date d)
{printf("\n %i/%i/%i \n",d.jour,d.mois,d.annee);}
void afficher_appartement(apt a)
{printf("id=%i \n",a.id);
printf("surface= %f \n",a.surface);
printf("discription:%s \n",a.disc);}
void afficher(lct *tab,int n)
{int i;
for(i=0;i<n;i++)
{
printf("affichage de %ieme element\n",i);

printf("%s",tab[i].namel);

afficher_date(tab[i].dd);

afficher_date(tab[i].df);

afficher_appartement(tab[i].a);}}
void afficher_fiche(lct l)
{printf("%s",l.namel);

afficher_date(l.dd);

afficher_date(l.df);

afficher_appartement(l.a);}
