#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  double *note = NULL;
  note = malloc(sizeof(double));
  //^^^Allocation dynamique 
  double moyenne = 0;
  double tour = 0;
  int yn = 1;

  if(note == NULL)
  {
    exit(0);
  }

  while(yn != 0)
  {
    printf("Veuillez saisir la note : ");
    scanf("%lf", note);
    
    moyenne = moyenne + *note;

    printf("Souhaitez vous saisir encore une note ? Y=1 | N=0 :");
    scanf("%d", &yn);
    
    tour++;
  }

  if(tour == 1)
  {
    printf("N'ayant qu'%0.0lf seule note, votre moyenne est de %0.2lf\n", tour, moyenne);
  } 
  else 
  {
    moyenne = moyenne / tour;
    printf("La moyenne des notes saisit : %0.2lf\n", moyenne);
  }
  
  free(note);
  return 0; 
}