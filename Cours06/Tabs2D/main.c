#include <stdio.h>
#include <stdlib.h>

#define MAX_LIGNES 10
#define MAX_COLONNES 20

int main(void) {
    int nb_lignes, nb_colonnes;
    double temperatures[MAX_LIGNES][MAX_COLONNES] = {
            {32, 31.5, 30, 28},
            {15, 16.5, 17, 14},
            {20, 23.5, 18}
    };

    nb_lignes = 3;
    nb_colonnes = 4;

    temperatures[2][1] = 23.5;
    printf("La case 2,1 contient: %lf\n", temperatures[2][1]);

    for(int i=0; i<nb_lignes; i++)
    {
        for (int j = 0; j < nb_colonnes; j++)
        {
            printf("%.2lf\t", temperatures[i][j]);
        }
        printf("\n");
    }
//    for(int j=0; j<nb_colonnes; j++ )
//    {
//        printf("%.2lf\t", temperatures[1][j]);
//    }
//    printf("\n");
//    for(int j=0; j<nb_colonnes; j++ )
//    {
//        printf("%.2lf\t", temperatures[2][j]);
//    }
//    printf("\n");

    return EXIT_SUCCESS;
}

/*
 * Lorsqu'on passe un tableau à 2 dimensions à une fonction, il
 * est obligatoire de spécifier la taille MAXIMALE en colonnes.
 */
void afficher_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    for(int i=0; i < nb_lignes ; i++)
    {
        for(int j=0; j< nb_colonnes; j++)
        {
            printf("%.2lf\t", tab[i][j]);
        }
        printf("\n");
    }
}

/* Écrire une fonction `moyenne_tab2d` qui reçoit
 * un tableau à 2 dimensions de réels et qui retourne
 * la moyenne du tableau. */