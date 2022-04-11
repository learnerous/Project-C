#include"location.h"
#include<string.h>
int sameapt(apt p1,apt p2)
{
if (p1.id!=p2.id)
return 0;
else
return 1;


}
int surface_valide(float  a)
{
    if((a<=150)&&(a>=80))
        return 0;
    else
        return 1;
}
 int surface_correspondance(lct tab[],int n,lct l)
{
    int j=0;
    while((j<n)&&(tab[j].a.id!=l.a.id))
          {
              j++;
          }
        if (j==n)
            return 0;
        else
        {
            if (tab[j].a.surface==l.a.surface)
                return 0;
            else return 1;
        }


}
