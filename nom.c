#include<string.h>
#include "location.h"
int search (char *s, char carac)
{
    int i;
    for(i = 0; s[i] != '\0';i++)
        if(s[i] == carac)
            return i;
    return 0;
}
int valider_mot(char *mot)
{
   int j,e;
    e=mot[0];
    if ((e>90)||(e<65))
        return 1;
    else
    {
        for(j=1;j<strlen(mot);j++)
        {   e=mot[j];
            if ((e<97)||(e>122))
                return 1;
        }

    }
    return 0;
}
int valider_nom(char *nom)
{
    int i=0,j,k,c1=0,c2=0;
    char ch1[15],ch2[15];
    i=search(nom,'-');
    if((i==0)||(i==strlen(nom)))
        return 1;
    else
    {
        for (j=0;j<i;j++)
        {
          ch1[c1]=nom[j];
          c1++;
        }
        for (k=i+1;k<strlen(nom);k++)
        {
            ch2[c2]=nom[k];
            c2++;
        }
        if((valider_mot(ch1)==1)||(valider_mot(ch2)==1))
            return 1;

    return 0;



    }
}
