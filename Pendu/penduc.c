/*
EXPLICATION en details de chaque fonction 

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Tous les prototypes des fonctions 

char motAleatoire(char *, int);
int tailleMot(char motSecret[]);
void initTableau(int* lettreTrouvee, int taille);
int gagne(int *lettreTrouvee, int nombreLettres);
char lireCaractere();
int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee);


int main(int argc, char *argv[]) 
{
    char lettre = 0; // Il va stocker la lettre proposéee par l'utilisateur (retour du scanf???)
    char motSecret[100] = {0}; // Le mot a trouver sera stocker ici
    motAleatoire(motSecret, 100); // Le motSecret est envoyé dans la fonction a fin de lui attribuer un mot au hasard depuis un fichier
    int nombreLettres = tailleMot(motSecret);// La fonction "tailleMot" calcule le nombre de lettres contenues dans le tableau de "char" et retourne un entier contenant le nombre de lettres a la var "nombreLettres"
    int coupsRestants = 10; // Compteur de coups restants (0 = perdu)
    int *lettreTrouvee = NULL; // Ce tableau aura la même taille que motSecret, et au fur et à mesure de l'avancement du jeu il sera modifié. Pour chaque lettre du mot secret trouveé la case correspondante sera mise a 1 sinon a 0(non trouvée || initialisée)
    lettreTrouvee = malloc(nombreLettres * sizeof(int)); //nous avons allouer de la mémoire avec le nombre de lettre grâce a la fonction "malloc"  
    initTableau(lettreTrouvee, nombreLettres);

    while(coupsRestants > 0 && !gagne(lettreTrouvee, nombreLettres))// Tant que le coup est supérieur à 0 et que si il n'a pas gagné.
    {
          
        printf("\n\nIl vous reste %d cousp a jouer", coupsRestants); // message qui va afficher le nbr de coups qui reste
        printf("\nQuel est le mot secret ? ");
        
        for(int i = 0 ; i < nombreLettres ; i++) // initialisation ; tant que i est inférieur à nombreLettres ; incréementation
        {
            if(lettreTrouvee[i]) // si "lettreTrouvee[i]"" position de i est equivalent a 1
                printf("%c", motSecret[i]); // donc afficher la lettre de cette position 
            else 
                printf("*"); // si non afficher l'étoile si "i" = 0
        }
        /*
        L'affichage du mot secret masqué par des * se fait grâce à une boucle "for".
        On analyse chaque lettre pour savoir si elle a été trouvée (if lettreTrouvee[i]).
        Si c'est le cas, on affiche la lettre.
        Sinon, on affiche une "*" de remplacement pour masquer la lettre.
        */

        printf("\nProposez une lettre : ");
        lettre = lireCaractere();
        
        // Si ce n'était PAS la bonne lettre
        if(!rechercheLettre(lettre, motSecret, lettreTrouvee))
        {
            coupsRestants--; // On enlève un coup au joueur
        }
    }
    if(gagne(lettreTrouvee, nombreLettres))
        printf("\n\nGagne ! Le mot secret etait bien : %s", motSecret);
    else
        printf("\n\n Perdu ! Le mot secret etait : %s", motSecret);
    
    free(lettreTrouvee); // libération de mémoire allouer 
       
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Fonction qui permet de calculer la taille du mot :

int tailleMot(char motSecret[])
{
    int nombreLettres = 0; // crée la var qui va recevoir la valeur de nombre de lettre de motSecret[]
    for(int i = 0; motSecret[i] != '\0'; i++) // initialisation ; condition ; incrémentation
    {
        nombreLettres++; // incrémentation jusqu'a que ce que la condition soit fausse
    }
    return nombreLettres; // retourne la variable (la valeur)
}
/*
La boucle "for" permet de calculer le nombre de lettre que le tableau "motSecret" contient, 
la boucle incrémente au variable "nombreLettre" jusqu'à ce que le "motSecret" arrive jusqu'au fin de chaine "\0"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Fonction qui permet d'initialiser l'ensemble des cases de notre tableau à 0 pour le début :

void initTableau(int* lettreTrouvee, int taille) // la fonction reçoit le pointeur du tableau et la taille
{
     for(int i = 0; i < taille; i++) //initialisation ; condition ; incrémentation
     {
         lettreTrouvee[i] = 0; // initialisation de chaque case a 0 dans la boucle "for"
     }
}
/*
La fonction va prendre en paramètre le pointeur du tableau et le nombre de lettre. 
La fonction sera de type "void" car on va directement modifier le tableau grâce au pointeur. 
On peut ensuite itérer sur l'ensemble des cases car on connaît la taille du tableau grâce à la variable "taille".
Il ne manque plus qu'à assigner la valeur 0 dans chaque case du tableau, effectivement l'opérateur [] permet de 
dé-référencer chaque case du tableau.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Fonction qui permet de savoir si le joueur a gagné ou pas  :

int gagne(int *lettreTrouvee, int nombreLettres)// la fonction reçois 
{
    int joueurGagne = 1; // variable booléen

    for(int i = 0; i < nombreLettres; i++) // initialisation; condition; incrémentation
    {
        if(lettreTrouvee[i] == 0) // si le tableau "lettreTrouvee" position i est égale à 0
        {
          joueurGagne = 0; // donc le var est égale à 0
        }
    }

    return joueurGagne;
}

/*
Le tableau "lettreTrouvee" permet de connaître chaque lettre trouvée dans le mot mystère. S'il reste encore une case 
qui a la valeur 0, alors la partie n'est pas encore gagnée. Dans ce cas, il faut vérifier chaque case du tableau et 
si une case contient la valeur 0, ondoit assigner la valeur 0 à la variable "joueurGagne".
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Fonction lit le caractère tapé 

char lireCaractere()
{
    char caractere = 0; 
    caractere = getchar(); // On lit le premier caractere 
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déja    
    
    //On lit les autre caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while(getchar() != '\n');

    return caractere; // On retourne le premier caractère à lu 
}
/*
Dans la fonction "lireCaractere()", Celle-ci lit le premier caractere tapé, le met en majuscule et vide le "buffer",
c'est-a-dire qu'elle vide les autres caractères qui auraient pu persister dans la mémoire.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Fonction qui vérifie l'exactitude du lettre saisit avec le mot secret

int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee)
{
    int bonneLettre = 0; // variable utilisé comme booléen pour "VRAI" ou "FAUX" 
    for(int i = 0; motSecret[i] != '\0'; i++) // initialisation ; tant que le var "motSecret[]" n'a pas atteint le caractère '\0' position "i" 
    {
        if(lettre == motSecret[i]) // si le caractère du "lettre" est équivalent au caractère du "motSecret[]" position "i"
        {
              bonneLettre = 1; //
              lettreTrouvee[i] = 1; // 
        }
    }
    return bonneLettre; // retourne comme résultat un "VRAI"(1) ou "FAUX"(0)
}
/*
On parcourt la chaîne "motSecret" caractère par caractere. A chaque fois, on vérifie si la lettre que le joueur a proposée est lettre du mot.
Si la lettre correspond, alors on fait deux choses : 

1.On change la valeur du booléen "bonneLettre à 1, pour que la fonction retourne 1 car la lettre se trouvait effectivement dans "motSecret
2.On met à jour le tableau "lettreTrouvee" à la position actuelle pour iniquer que cette lettre a été trouvée.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Cette fonction va permettre de choisir aléatoirement un mot dans un fichier désigné


char motAleatoire(char *mot, int taille)
{  
    FILE* fichier = NULL;
    srand(time(NULL)); // fonction qui permet de 
    char nbrDeMots = 0; // la variable ou chaque caractere sera stocker 
    int nbrSauts = 0; // le variable a qui sera attribuer le nombre de ligne dans le fichier a lire 

    fichier = fopen("couleur", "r"); // ouverture et lecture du fichier "couleur" dans "fichier"
    
    if(fichier != NULL)// Si le fichier est differend de NULL
    {
        do //Fait : attribue chaque caractere du fichier au "nbrDeMots" 
        {
            nbrDeMots = fgetc(fichier);
            
            if(nbrDeMots == '\n') // Si le variable "nbrDeMots" est égale à '\n' incrémente "nbrSauts"
            {
                nbrSauts++;
            }

        }while(nbrDeMots != EOF); // tant que le fichier est differend de EOF (fin de fichier)
       
        rewind(fichier); // revenir au début du fichier 
       
        nbrSauts = rand() % nbrSauts; // choix aléatoire de la valeur de nombre de ligne que la variable "nbrSauts" a
         
        for(int i = 1; i < nbrSauts; i++) // ...
        {
            if(fgets(mot, taille, fichier) == NULL)
            {
                printf("Erreur sur la ligne spécifiée 1 \n");
                fclose(fichier);// fermeture de fichier
            }
        }
        
        if(fgets(mot, taille, fichier) != NULL)// ...
        {
            fclose(fichier); // fermeture de fichier
            return *mot; // retourner le var type char 
        }
        else
        {
            printf("Erreur 2\n");
        }
        fclose(fichier); // fermeture de fichier     
    }
    else
    {
       printf("Le fichier n'a pu s'ouvrir\n");
    }
    return *mot;
}



/*
Déroulement du jeu du Pendu  : 

1- On a un mot choisit au hasard qu'on aura a deviner
2- Le joueur propose une lettre , exemple "A"
3- L'ordinateur vérifie si cette lettre se trouve dans le mot caché.
4- Si oui, on dévoile la lettre du mot. Si non, on indique que la lettre ne s'y trouve pas et on diminue le nombre de coups restants.
5- Quand il ne reste plus de coups(0), le jeu est terminé et on a perdu.
*/





