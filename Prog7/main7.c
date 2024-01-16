#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
    int n = 0;
    unsigned long long fact = 1;

    printf("Veuillez saisir un nombre entier positif : ");
    scanf("%d", &n);

    if(n < 0)
    {
       printf("Votre nombre est inferieur ou egale a 0\n");

       while(n <= 0)
       {
          printf("Veuillez ressaisir un nombre entier positif :");
          scanf("%d", &n);
       }
    }    
    else
    {
       for(int i = 1; i <= n; i++) // initialisé a 1 (i = 1); inférieur ou égale à "n"; incrémentation
       {
         printf("%d", i);
          fact *=i;// multiplier la variable par la valeur de i qui sera incrémentée a chaque tour
       }
    }
    printf("Le factorielle de %d est %llu\n", n, fact);

  return 0; 
}


