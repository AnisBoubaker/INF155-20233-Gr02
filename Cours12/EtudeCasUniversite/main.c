#include <stdio.h>

#define TAILLE_MAX 50
#define MAX_INSCRIPTIONS 100
#define NB_TOTAL_ETUDIANTS 10000

typedef struct date{
    int jour;
    int mois;
    int annee;
} t_date;

typedef enum type_session{
    AUTOMNE, HIVER, ETE
} e_type_session;

typedef struct session{
    e_type_session type;
    t_date debut;
    t_date fin;
} t_session;

typedef struct cours{
    char sigle[7];
    char* titre;
    int nb_credits;
    double ponderations[4];
    int nb_max_etudiants;
} t_cours;

typedef struct inscription{
    double tp1;
    double tp2;
    double intra;
    double final;
    t_cours* cours;
    t_session* session;
} t_inscription;

typedef struct etudiant{
    char nom[TAILLE_MAX]; //Le nom est alloué de façon statique
    //char* nom; //Choix si on décide que le nom doit être alloué dynamiquement
    char* prenom;
    char code_perm[13];
    t_inscription inscriptions[MAX_INSCRIPTIONS];
} t_etudiant;

typedef struct universite{
    t_etudiant* etudiants[NB_TOTAL_ETUDIANTS];
    t_cours** cours;  //Tableau dynamique de références vers des cours.
    t_session** sessions; //Tableau dynamique de références vers des sessions
} t_universite;



int main() {
    printf("Hello, World!\n");
    return 0;
}
