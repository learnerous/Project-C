#ifndef MP_H_INCLUDED
#define MP_H_INCLUDED
#include<stdio.h>
typedef struct date
{int jour ;
int mois;
int annee;
}date;
typedef struct appartement
{int id;//identifiant d'appartement
float surface;//surface d'appartement
char disc[200];//une discription d'appartement
}apt;

struct location
{char namel[20];// non de locataire
date dd;//date de debut de location
date df;//date de fin de location
apt a;};
typedef struct location lct;
typedef struct locataire
{char name[20];
int cnd;}locataire;
void saisir_appartement (apt *p );
void saisirdate(date *d);
lct new_location();
void change(lct tab[],int n,lct *l);//update :fiche de location
int date_equal_date(date d1,date d2);
int sameapt(apt p1,apt p2);
int valadite_date(date d);

void recherche(lct tab[],int n);
int date_sup_date(date d1,date d2);
void trier(lct tab[],int n);
int disponibilte(lct tab[],int n ,lct l);
void ajouter(lct tab[],int * n);
void supprimer (lct tab[],int n);
void afficher_date(date d);
void afficher(lct * tab,int n);
void afficher_appartement(apt a);
int visitor_existance(locataire tab[],int n,locataire la);
void saisir_locataire( locataire *lo);
void ajouter_un_locataire(locataire *tab,int m);

int login();
void afficher_fiche(lct l);
void existance(lct tab[],int n);
void music();
void agenda();
int surface_valide(float a);
void permuter(lct *l1,lct *l2);
int surface_correspondance(lct tab[],int n,lct l);
int valider_mot(char *mot);
int valider_nom(char *nom);
int search (char *s, char carac);
int valider_id(int id);

#endif // MP_H_INCLUDED
