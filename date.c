#include"location.h"
int date_equal_date(date d1,date d2)
{if (d1.annee!=d2.annee)
return 0;
else
{if (d1.jour!=d2.jour)
return 0;
else
{if(d1.mois!=d2.mois)
return 0;
else
return 1;}}}
int annee_bissextile(int annee)
{if(annee % 4 == 0)
    {
        if( annee % 100 == 0)
        {
            if ( annee % 400 == 0)
                return 1;/*1 pour année bissectile sinon 0*/
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;}

 int valadite_date(date d)
{int valid;
if((d.mois>=1) && (d.mois<=12) && (d.jour>=1)&&(d.annee>=2022))
{switch(d.mois)
{case 4:
case 6:
case 9:
case 11:
if(d.jour<=30)
valid=1;
else
valid=0;
break;
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
if(d.jour<=31)
valid= 1;
else
valid= 0;
case 2:

switch (annee_bissextile(d.annee))
{case 0:
if(d.jour<=28)
valid=1;
else
valid=0;
case 1:
if(d.jour<=29)
valid=1;
else
valid=0;
}
}
}
else
valid=0;
return valid;}
int date_sup_date(date d1,date d2)
{if (d1.annee>d2.annee)
return 1;
else if (d2.annee>d1.annee)
return 0;
else
{if (d1.mois>d2.mois)
return 1;
else {if(d1.mois<d2.mois)
return 0;
else {if (d1.jour>d2.jour)
return 1;
else
return 0;
}
}
}
}
