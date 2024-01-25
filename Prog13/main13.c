#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 1000

void breakline(char*, int);
void palindromeOrNot(char*);

int main(int argc, char *argv[])
{ 
     char *write = malloc(TAILLE * sizeof(char));
     
     printf("\nPalindrome || Non ?\n");
     printf("Veuillez saisir le mot : ");

     if(fgets(write, TAILLE, stdin) == NULL)
     {
       free(write);
       exit(0);
     }  
     
     breakline(write, TAILLE);
     
     palindromeOrNot(write);

     free(write);
     return 0;
}

// Fonction qui va supprimer le saut de ligne 
void breakline(char *write, int a)
{
  char *search = NULL;

  search = strchr(write, '\n');

  if(search != NULL)
  {
    *search = '\0';
  }
  else
  {
    printf("Erreur de signe \n");
  }
}

void palindromeOrNot(char *write)
{
  // Les variables qui vont choisir les positions dans le tableau "write"
  int big = 0;
  int smal = 0;

  // variable qui va dire si c'est un Palindrome ou pas 
  int false = 0;
  
  // Variable qui va s'incrémenteé si "pe == de"
  int di = 0;

  // Les varaibles qui vont contenir les caractères 
  char pe = 0;
  char de = 0;

  // Fonction qui va compter le nombre de caractère que le tableau contient
  for(int i = 0; write[i] != '\0'; i++)
  {
    big++;
  }

  big--;

  // Fonction qui va vérifier si le saisit est un Palindrome ou pas 
  do
  { 
      pe = write[smal];
      de = write[big];

      if(pe != de)
      {
          smal = big;
          false = 1;
      }
    
      smal++;
      big--;

  }while(smal <= big);

  if(false)
  {
      printf("Le mot que vous avez saisit ''n'est pas un Palindrome''\n");   
  }
  else 
  {
      printf("Le mot que vous avez saisit est √BIEN UN PALINDROME√\n");
  }

}






