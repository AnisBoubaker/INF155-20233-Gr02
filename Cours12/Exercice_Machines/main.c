#include <stdio.h>
#include "t_date.h"
#include "t_machine.h"

#define MAX_MACHINES 1000

int main() {
    t_machine* machines[100];
    t_machine_ptr** machines_classees;

    //Crée des machines aléatoirement
    machine_jeu_machines(machines, 50);

    machine_sauvegarder_machines(machines, 50, "../sauvegarde_machines.txt");

//    machines_classees = machine_classer_machines(machines, 50);
//
//    for(int i=0; i< NB_CATEGORIES; i++)
//    {
////        int j=0;
////        while (machines_classees[i][j] != NULL)
////        {
////            machine_afficher((machines_classees[i][j]));
////            j++;
////        }
//        printf("\n\n###### LISTE DE MACHINES DE LA CATEGORIE %i #########\n", i+1);
//        for(int j=0; machines_classees[i][j]!=NULL ; j++)
//        {
//            machine_afficher((machines_classees[i][j]));
//        }
//    }

    return 0;
}
