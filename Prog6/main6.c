#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int choice = 0;
    double c = 0, f = 0;
    double *enter = malloc(sizeof(double));
    

    printf("Choisir la conversion de température\n Conversion\n °C en °F = 1 | °F en °C = 0 : ");
    scanf("%d", &choice);
    if(enter != NULL) 
    {

         if(choice == 1)
        {
          printf("Veuillez saisir la température en °C : ");
          scanf("%lf", enter); 
       
          c = *enter;
          f = (c * 9/5) + 32;
          //°F = (°C * 9/5) + 32
          printf("La température en °F : %0.2lf\n", f);
        }
         else if(choice == 0)
        {
          printf("Veuillez saisir la température en °F : ");
          scanf("%lf", enter); 
       
          f = *enter;
          c = (f - 32) * 5/9;
          //°C = (°F - 32) * 5/9
          printf("La température en °C : %0.2lf\n", c);
        }
         else 
        {
          printf("Erreur de saisit\n");
        }
    }
    else
    {
      printf("Allocation de mémoire a échouer\n");
    }
    
   free(enter);
  return 0; 
}



