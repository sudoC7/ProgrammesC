#include <stdio.h>
#include <stdlib.h>


void fonction(int *, int);

int main(int argc, char *argv[])
{ 
    int *tableau = NULL;
    int a = 0;

    printf("Veuillez saisir la taille de votre tableau : ");
    scanf("%d", &a);

    if(a <= 0)
    {
        printf("Le nombre saisit et un nombre négatif\n");

        while(a <= 0)
        {
          printf("Veuillez saisir un nombre superieur a 0\n");
          scanf("%d", &a);
        }
    }
    
    tableau = malloc(a * sizeof(int));
    
    for(int i = 0; i < a; i++)
    {
       scanf("%d", &tableau[i]); // exeption pour le tableau a l'allocation dynamque 
    }
   
    fonction(tableau, a);
 
    free(tableau);

    return 0;
}

void fonction(int *tableau, int a)
{
    int r = 0;
    int c = 0;
    int p = 1;

    printf("Veuillez saisir l'element que vous recherchez : ");
    scanf("%d", &r);

    while(p == 1)
    {
      for(int i = 0; i < a; i++)
      {
           if(r == tableau[i])
           {
              c = tableau[i];
              p = 0;
           }
           else
           {
              p = 2;
           }        
      }
    } 

    if(c == r)
    {
      printf("L'element que vous recherchez est bien present dans le tableau : %d\n", c);
    }
    else if(p == 2)
    {
      printf("L'element que vous recherchez n'est pas dans le tableau\n");
    }

}


