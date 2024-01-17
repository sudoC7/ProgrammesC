#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int n = 0;
  int a = 0;

  printf("Veuillez saisir un entier positif : ");
  scanf("%d", &n);

  if(n < 0)
  {
    printf("Vous avez saisis une valeur négatif\n");

    while(n > 0)
    {
      printf("Veuillez ressaisir une valeur positif : ");
      scanf("%d", &n);
    }
  }
  
  a = n;
  int result = 1;

  for(int i = 1; i < a; i++ )
  {
    result *=n;
  }

  printf("La puissance de %d est %d\n", n, result);

  return 0;
}


