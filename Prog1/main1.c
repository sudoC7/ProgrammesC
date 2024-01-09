#include <stdio.h>
#include <stdlib.h>
//#include

#define  TAILLE 1000

int main(int argc, const char *argv[])
{
    int tableau[7] = {0}; // je crée un tableau de 7 cases 

    for(int i = 0; i < 7; i++) // initialisation ; condition ; incrémentation 
    {
        tableau[0] = 1; // La case 0 contient la valeur 1 
        
        if(tableau[i] != tableau[0])// tant que que le tableau[i] est differend de tableau[0], cad i differend de 0
        {
           tableau[i] = tableau[i - 1] + 1; //... tableau[i=1] = tableau[1-1=0] + 1 | donc tableau[1] = {2} ...ect 
        }
      printf("%d\n", tableau[i]); // afficher chaque valeur de chaque case 
    }
    return 0;
}






/*∆∆∆

    tableau[i] = tableau[i - 1] + 3; //∆∆∆  //
    printf("%d\n", tableau[i]);


 tableau[0] = tableau[0 - 1] + 3 = tableau[0] = {3}
 tableau[1] = tableau[1-1=0] + 3 = tableau[1] = {6}
 tableau[2] = tableau[2-1=1] + 3 = tableau[2] = {9}
 tableau[3] = tableau[3-1=2] + 3 = tableau[3] = {12}
 tableau[4] = tableau[4-1=3] + 3 = tableau[4] = {15}
 tableau[5] = tableau[5-1=4] + 3 = tableau[5] = {18}
 tableau[6] = tableau[6-1=5] + 3 = tableau[6] = {21}









 cad = c'est à dire

*/
















































































