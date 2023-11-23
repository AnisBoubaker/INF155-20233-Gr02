#include <stdio.h>
#include "t_date.h"

int main() {
    t_date date1, date2;

//    date1.annee = 2022;
//    date1.mois = DECEMBRE;
//    date1.jour = 1;
//
//    date2.annee = 2022;
//    date2.mois = DECEMBRE;
//    date2.jour = 1;
//
//    int comparaison = date_cmp(date1, date2);
//    if(comparaison > 0 )
//    {
//        printf("La date1 est plus récente que date2\n");
//    }
//    else if( comparaison <0 )
//    {
//        printf("La date1 est antérieure à la date 2\n");
//    }
//    else
//    {
//        printf("Les deux dates sont identiques.\n");
//    }

    date1.annee = 2022;
    date1.mois = DECEMBRE;
    date1.jour = 1;

    if(date_set_date(&date1, 29, FEVRIER, 2021))
    {
        printf("La date a ete definie!\n");
    }
    else
    {
        printf("La date est erronee!\n");
    }
    printf("Le contenu de date1: %i/%i/%i", date1.jour, date1.mois, date1.annee);


    return 0;
}
