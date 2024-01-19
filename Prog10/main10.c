#include <stdio.h>
#include <stdlib.h>

 
void tribulle(int a[], int size);

int main(int argc, char *argv[]) 
{   
   int size = 0;
   
   printf("Veuillez saisir la taille de votre tableau [Conditions : un entier positif]: \n");
   scanf("%d", &size);
   
   if(size < 0)
   {
        printf("Vous avez saisit un nombre negatif\n");     

        while(size < 0)
        {
            printf("Veuillez ressaisir un nombre entier positif\n");
            scanf("%d", &size);
        }
   }
    

    int *a = malloc(size * sizeof(int)); 
    if(a == NULL)
    {
     printf("Erreur d'allocation mémoire\n");
     free(a);
    }
   
  
    printf("Maintenant veuillez saisir les éléments du tableau\n");

    for(int i = 0; i < size; i++)
    {
        //printf("Element %d : ", i + 1);
        scanf("%d", &a[i]);   
    }

    tribulle(a, size);

    printf("Valeurs trié : \n");
    
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
/**/ 
    free(a);
    return 0;
}


void tribulle(int a[], int size)
{
  int temp = 0; // valeur temporaire;
  int boole = 0; // booléen

  do
  {
        boole = 0;
        for(int i = 0; i < size - 1; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                boole = 1;
            }
        }

  }while(boole);

}