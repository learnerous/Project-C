#include <stdio.h>
#include <conio.h>
#include <string.h>

int login()
{

  char username[30];
  char userpwd[8]; // for storing password
  int i;

  printf("Entrer votre nom d'utilisateur : ");
  //gets(username);
  scanf("%s",username);

  printf("entrer votre mot de passe : ");
  /* accepter  mot de passe  */

  for(i=0;i<7;i++)
  {
   userpwd[i]=getch();
   printf("*");
  }
  userpwd[i]='\0';

/*------------------*/

  printf("\n\ncliquer une bouton pour continuer \n");
  getch();

 if(!strcmp(username,"ridamiouss") && !strcmp(userpwd,"ridao12"))
 {
  printf("\n\nvous etes le bienvenu\n");
  return 0;
 }
 else
 {
  printf("\n\nnom d'utilisateur et/ou mot de passe incorrect(s) \n");
  return 1;
 }
}
