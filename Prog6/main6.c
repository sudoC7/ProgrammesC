#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>


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


/*

Exercice : Conversion de Température

Écrivez un programme en langage C qui convertit la température de degrés Celsius (°C) en degrés Fahrenheit (°F) ou vice versa en fonction de la demande de l'utilisateur.
 Voici les étapes :

Le programme demande à l'utilisateur de choisir entre la conversion de °C en °F ou de °F en °C.
L'utilisateur entre le choix (par exemple, 1 pour °C en °F ou 2 pour °F en °C).
Ensuite, l'utilisateur entre la température à convertir.
Le programme effectue la conversion en utilisant les formules appropriées.
Le résultat est affiché.
Voici les formules de conversion :

Pour convertir de °C en °F : °F = (°C * 9/5) + 32
Pour convertir de °F en °C : °C = (°F - 32) * 5/9
Cet exercice vous permettra de pratiquer les opérations mathématiques, les entrées et sorties, ainsi que les structures conditionnelles en C. Bonne chance !

*/

/*
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
Convert the character in number with "strtol"

i = strtol("150", NULL, 10) // i = 150

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


dynamic allocation 

int *pointer = malloc(sizeof(int)); 

array dynamic allocation 

int tal = 5;
int *pointer = malloc(tal*sizeof(int)); // an example not to apply : pointer[tal] 

exemple:
for(int i = 0; i < tal; i++)
{
  printf("%d", pointer[i]);
}

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
fgetc : read a single character
fgets : read the texte of the file 
fscanf : attribut 

fputc : write a character
fputs : write a string
fprintf : write formatted string
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

strlen(chain); // calculate the character

strcpy(copie, chain); // copie the in other

strcat(chain0, chain1); // add a chain next of another chain

strcmp(chain, chain1); // compare strings

strpbrk(chain, chain1); // searche in strings of a character

strstr(chain, chain1); // searche in strings of a multitude character

sprintf(chain, "Calculate the caracter %d\n", a); // to write in the an chain 

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

if(condition)
{
  // instructions
}

else if(condition)
{
  // instructions
}

else
{
  // instructions
}

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

if(1)
{
  // instructions
}
else
{
  // instructions
}

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

switch(variable)
{
    case *: 
      //instructions;
    break;

    default:
      //instructions;
    break;
}

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

if(majeur)
   age=18;
else
   age=16;

equal to instruction

age=(majeur)?18:16; // this instruction name the ternary expressions

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

while(condition is true)
{
   // instructions
}

do
{

  // instructions

}while(conditions is true)

for(intialisation; conditions ; incremens)
{
  // instructions
}

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

type nomFunction(setting)
{
  // insert to you instructions
}

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

THE PROTOTYPES

type nomFunction(setting); // prototype of function in head

int main(int argc, char *argv[])
{   
}
 
type nomFunction(setting)
{
  ...
}

THE HEADERS

The .h : named head, this file contain the prototypes of the functions of file .c
The .c : This file contain the functions 

#include <stdlib.h>
#include <stdio.h>
#include "jeu.h" // include the file .h

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::





::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::






::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::






::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

*/
