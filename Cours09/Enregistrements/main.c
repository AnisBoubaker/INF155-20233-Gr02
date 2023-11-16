#include <stdio.h>

typedef unsigned int uint;

typedef struct lecture{
    double temperature;
    double humidite;
    double co2;
    int jour;
    int mois;
    int annee;
} t_lecture;

//struct lecture
//{
//    double temperature;
//    double humidite;
//    double co2;
//    int jour;
//    int mois;
//    int annee;
//};
//
//typedef struct lecture t_lecture;

void t_lecture_afficher(t_lecture lec);

int main() {

    t_lecture lecture1, lecture2;

    /*
     * Tableau, où chaque case contient un enregistrement COMPLET de type
     * struct lecture.
     */
    struct lecture tab_lectures[100];


    lecture1.temperature = 25.8;
    lecture1.humidite = 40.5;
    lecture1.co2 = 10.2;
    lecture1.jour = 16;
    lecture1.mois = 11;
    lecture1.annee = 2023;

    lecture2.temperature = 23.0;
    lecture2.humidite = 43.5;
    lecture2.co2 = 11.5;
    lecture2.jour = 15;
    lecture2.mois = 11;
    lecture2.annee = 2023;

    t_lecture_afficher(lecture1);
    t_lecture_afficher(lecture2);


    return 0;
}

void t_lecture_afficher(t_lecture lec)
{
    printf("Date: %i/%i/%i\n", lec.jour, lec.mois, lec.annee);
    printf("Temperature: %.2lf\n", lec.temperature);
    printf("Humidite: %.2lf\n", lec.humidite);
    printf("Concentration CO2: %.2lf\n", lec.co2);
}
