#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>


int main(int argc, char *argv[])
{
  double a = 0, b = 0;
  char operateur = 0;
  int exit = 0;
  
  
  
  while(exit == 0)
  {
    double c = 0;
    
    printf("\n\nCalculatrice simple\n\n");
    scanf("%lf", &a);
    scanf("%c", &operateur);
    
    switch(operateur)
    {
      case '+':
            scanf("%lf", &b);
            c = a + b;
            printf("%0.0lf\n\n", c);

            printf("exit : Y=1 or N=0 :");
            scanf("%d", &exit);
      break;
      case '-':
            scanf("%lf", &b);
            c = a - b;
            printf("%0.0lf\n\n", c);

            printf("exit : Y=1 or N=0 :");
            scanf("%d", &exit);
      break;
      case '*':
            scanf("%lf", &b);
            c = a * b;
            printf("%0.0lf\n\n", c);
            printf("exit : Y=1 or N=0 :");
            scanf("%d", &exit);
      break;
      case '/':
            scanf("%lf", &b);
            
            if(b == 0)
            {
                printf("Division par 0 n'est pas possible\n");
            }
            c = a / b;
            
            printf("%0.2lf\n\n", c);
            printf("exit : Y=1 or N=0 :");
            scanf("%d", &exit);
      break;
      default:
            printf("Erreur de saisit d'opérateur\n");
      break;
    }

  }
     

  return 0; 
}




/*
switch(variable) 
{
          case*:
              Exemple d’instruction…;
          break;

          default:
              Exemple d’instruction…;
          break;
}
*/















/*

Voici quelques points à considérer pour améliorer votre programme :

Gestion des erreurs : Votre programme signale une "Erreur de saisie d'opérateur" en cas de saisie incorrecte de l'opérateur. 
Il serait utile d'ajouter un message explicatif pour indiquer à l'utilisateur quelle opération est incorrecte.

Validation de l'opérateur : Vous pourriez envisager d'ajouter une vérification pour vous assurer que l'opérateur saisi est valide (+, -, *, /) avant de tenter l'opération. 
Cela pourrait aider à prévenir les erreurs.

Division par zéro : Actuellement, votre programme ne gère pas la division par zéro. 
Vous pourriez ajouter une vérification pour éviter cela.

Sortie : Vous pourriez envisager d'ajouter un mécanisme pour permettre à l'utilisateur de continuer à effectuer des calculs ou de quitter le programme après chaque opération.

*/

/*

Exercice : Calculatrice Simple

Écrivez un programme en langage C qui fonctionne comme une calculatrice simple. Le programme devrait demander à l'utilisateur de saisir deux nombres et un opérateur (+, -, *, /). Ensuite, il devrait effectuer l'opération correspondante sur les deux nombres et afficher le résultat.

Voici comment cela pourrait être structuré :

Le programme demande à l'utilisateur de saisir le premier nombre.
L'utilisateur entre le premier nombre.
Le programme demande à l'utilisateur de saisir un opérateur (+, -, *, /).
L'utilisateur entre l'opérateur.
Le programme demande à l'utilisateur de saisir le deuxième nombre.
L'utilisateur entre le deuxième nombre.
Le programme effectue l'opération correspondante en fonction de l'opérateur et affiche le résultat.
Cet exercice vous permettra de pratiquer les entrées et sorties, les opérations mathématiques et les conditions en C

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
