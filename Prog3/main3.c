#include <stdio.h>
#include <stdlib.h>

void calMots();

int main()
{
    calMots();

  return 0;  
}

void calMots()
{
    FILE* fichier = NULL;
    fichier = fopen("couleur", "r");

    int nbrDeMots = 0;
    int nbrSauts = 0;

    if(fichier != NULL)
    {
       do
       {
            nbrDeMots = fgetc(fichier);
       
            if(nbrDeMots == '\n')
            {
                nbrSauts++;
            }

       }while(nbrDeMots != EOF);

    fclose(fichier);   
    }
    else
    {
       printf("Le fichier n'a pu s'ouvrir\n");
    }

    printf("Dans le fichier 'couleur' il y'a %d mots\n", nbrSauts);

}


/*
Cette fonction va compter le nombre de ligne dans un fichier 

Supposons que nous avons une liste avec un mot sur chaque ligne :

LIGNE
AVION
ROUGE
 
à la fin du programme il nous le dira combien de mot y'a t'il sur chaque ligne 

*/