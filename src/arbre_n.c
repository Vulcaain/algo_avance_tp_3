#include "arbre_n.h"

Noeud* initialiser_noeud(char chr) {
    Noeud* nd = (Noeud*)malloc(sizeof(struct noeud));
    nd->charactere = chr;
    nd->fils = NULL;
    nd->frere = NULL;

    return nd;
}

void insertion(Noeud *nd, char* mot) {
    /* Dans le cas où le noeud est NULL, on ajoute tout (ou le reste) du mot. */
    if (nd == NULL) {
        nd = initialiser_noeud(*mot);
        insertion(nd->fils, mot+1);
    }
    /* Dans le cas où l'on arrive à la fin d'un mot dans le dictionnaire, on réalise l'insertion dans le noeud fils */
    else if (nd->charactere == '\0') {
        insertion(nd->fils, mot);
    }

    if (nd->charactere == *mot) {
        insertion(nd->fils, mot+1);
    }
    else if (nd->charactere < *mot) {
        insertion(nd->frere, mot);
    }
    else {
        /* 
         * La lettre qui se trouve dans le noeud est située "plus à gauche dans l'alphabet" 
         * que la lettre courante du mot à placer.
         */
        
    }

}