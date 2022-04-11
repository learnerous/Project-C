#include "location.h"
#include <stdio.h>
#include <string.h>
void permuter(lct *l1,lct *l2)
{
    lct laux;
    strcpy(laux.namel,l1->namel);
    laux.dd=l1->dd;
    laux.df=l1->df;
    laux.a=l1->a;
    strcpy(l1->namel,l2->namel);
    l1->dd=l2->dd;
    l1->df=l2->df;
    l1->a=l2->a;
    strcpy(l2->namel,laux.namel);
    l2->dd=laux.dd;
    l2->df=laux.df;
    l2->a=laux.a;



}
void trier(lct tab[],int n)
{
    int rep;
int i,j;


printf("*****************tri_menu************************\n");
printf("suivant quel caractere voulez_vous trier votre tableau\n");
printf("*************************************************\n");
printf("1:pour le tri selon nom de locateur\n ");
printf("*************************************************\n");
printf("2:pour le tri selon date de dubut de location\n");
printf("*************************************************\n");
printf("3:pour le tri selon de fin de location\n ");
printf("*************************************************\n");
printf("4:pour le tri selon l'identifiant d'appartement\n");
printf("*************************************************\n");
scanf("%i",&rep);
switch (rep)
{
    case 1:
for (i=1;i<=n;i++)
{
    for(j=0;j<n-1;j++)
{
    if (strcmp(tab[j].namel,tab[j+1].namel)>0)
{
    permuter(&tab[j],&tab[j+1]);
}
}
}
break;
case 2:
for (i=1;i<=n;i++)
{
    for(j=0;j<n-1;j++)
{
    if (date_sup_date(tab[j].dd,tab[j+1].dd)==1)
{
    permuter(&tab[j],&tab[j+1]);
    }
    }
    }
    break;
case 3:
for (i=1;i<=n;i++)
{
    for(j=0;j<n-1;j++)
{
    if (date_sup_date(tab[j].df,tab[j+1].df)==1)
{
    permuter(&tab[j],&tab[j+1]);
}
}
}
break;
case 4:
    for (i=1;i<=n;i++)
{
    for(j=0;j<n-1;j++)
{
    if (tab[j].a.id>tab[j+1].a.id)
{
    permuter(&tab[j],&tab[j+1]);
}
}
}
break;

}
}
