#include <stdio.h>
#include <stdlib.h>
#include "main11.h"

void delleap(char *, int);
void emptbuff();

int main(int argc, char *argv[])
{
  Info *write = malloc(TAILLE * sizeof(Info)); 
  int a = 0;
  
  if (write == NULL) 
  {
    printf("Allocation dynamique a échouée\n");
    exit(0);
  }
  
  printf("Saisir un texte : ");

  if(fgets(write->text, TAILLE, stdin) != NULL)
  {
    delleap(write->text, TAILLE);
  }
  else
  {
    return 1;
  }
  
  for(int i = 0; write->text[i] != '\0'; i++)
  {
    a++;
  }
  
   int i = 0, b = a - 1;
   char temp;

   do{
        
        temp = write->text[i];
        write->text[i] = write->text[b];
        write->text[b] = temp;
        i++;
        b--;
                  
   }while(i < b);
   
   printf("Texte inversée : ");
   printf("%s\n", write->text);

  free(write);
  return 0;
}

void delleap(char *texte, int a) 
{
  char *lettre = malloc(sizeof(char));
  int i = 0;

  do
  {
    *lettre = texte[i];

    if(lettre != NULL)
    {
      if (*lettre == '\n')
      {
        *lettre = '\0';
        texte[i] = *lettre;
      }
      i++; 
    }
    else
    {
      int a = 1;
      emptbuff();
    }

    
  } while (*lettre != '\0' && a);

  free(lettre);
}

void emptbuff()
{
  int c = 0;

  while(c != '\n' && c != EOF)
  {
    c = getchar();
  }
}

