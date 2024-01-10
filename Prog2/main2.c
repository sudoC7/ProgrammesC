#include <stdio.h>
#include <stdlib.h>


#define TAILLE 1000

void fonction(const char text[], int *pointeur);

int main(int argc, const char *argv[])
{  

  char text[TAILLE] = {0}; 
  int taille = 0; // variable initialisé 

    printf("Enter a text : "); 
    scanf("%s", text); //"1" je saisis le text dans le tableau "text" 
        
    fonction(text, &taille); //"2" j'envois le texte saisis et l'adresse du variable 
 
    printf("Your Text : %s : this composed to %d caracter\n", text, taille);//"6" affichage de text

   return 0;
}

void fonction(const char text[], int *pointeur) // 
{
    int nombre = 0; // variable initialisé 

    for(int i = 0; text[i] != '\0'; i++) //"3" initialisation ; tant que text[i] est differend de '\0'; incrémentation
    {
       nombre++; //"4" incrémentation a chaque tour 
    }
    *pointeur = nombre; //"5" une fois la boucle fini, la valeur de la var "nombre" est égale a "*pointeur"
}













