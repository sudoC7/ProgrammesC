#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int n = 0, N = 0;
  int a = 0;
  
  printf("Saisir un nombre entier positif : ");
  scanf("%d", &n);

  if(n < 0) 
  {
     printf("Le nombre saisit est négatif\n");

     while(n < 0)
     {
       printf("Veuillez ressaisir un nombre positif :");
       scanf("%d", &n);
     }
  }
 
  N = n;

  while(n != 0)
  {
    a += n % 10;
    n /=10; 
  }
  
  printf("la somme des chiffres saisit : %d, est %d\n", N, a);

  return 0;
}
