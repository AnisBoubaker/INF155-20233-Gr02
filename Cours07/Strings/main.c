#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 100

int main() {
    //Tableau de caractères qui se termine par le \0
    //C'est donc une chaine de caractères
    char salutation[TAILLE_MAX] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', ' ', 'a', ' ', 't', 'o', 'u', 's', '\0'};
    int taille;

    //%s : String = Chaine de caractères
    printf("%s\n", salutation);

    taille = 0;
    while(salutation[taille]!='\0')
    {
        taille ++;
    }
    printf("La taille de la chaine: %i\n", taille);
    printf("La taille de la chaine: %i\n", strlen(salutation));

    return 0;
}
