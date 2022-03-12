#include "arbre_n.h"

Noeud* initialiser_noeud(char chr) {
    Noeud* nd = (Noeud*)malloc(sizeof(struct noeud));
    nd->charactere = chr;
    nd->fils = NULL;
    nd->frere = NULL;
}

Noeud* insertion(Noeud *nd, char* mot) {
    /* Dans le cas où le noeud est NULL, on ajoute tout (ou le reste) du mot */
    if (nd == NULL) {
        nd = initialiser_noeud(*mot);
        
        if (*(mot+1) != '\0') {
            insertion(nd->fils, mot+1);
        } else {
            nd->fils = initialiser_noeud('\0');
        }
        
    }

    if (nd->charactere == *mot) {
        insertion(nd->fils, mot+1);
    }
    else if (nd->charactere < *mot) {
        insertion(nd->frere, mot);
    }
    else {
        
    }

}