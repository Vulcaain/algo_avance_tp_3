#ifndef _ARBRE_N_HH_
#define _ARBRE_N_HH_

#include <stdio.h>
#include <stdlib.h>

typedef struct noeud {
    char charactere;
    struct noeud *fils;
    struct noeud *frere;
} Noeud;

Noeud* initialiser_noeud(char chr);

void insertion(Noeud *noeud_p, char* mot);

#endif
