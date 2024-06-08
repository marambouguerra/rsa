#ifndef LSTPRIM2_H_INCLUDED
#define LSTPRIM2_H_INCLUDED
#include "LSTDECRYPTAGE.h"
#include "ELTCRYPTAGE.h"
LISTE2 liste2Creer(void);
void liste2Detruire(LISTE2);
int estVide2(LISTE2);
int estSaturee2(LISTE2);
int liste2Taille(LISTE2);
ELEMENT3 recuperer2(LISTE2,int);
int inserer2(LISTE2,ELEMENT3,int);
int supprimer2(LISTE2, int);
void liste2Afficher(LISTE2);
LISTE2 liste2Copier(LISTE2);
int liste2Comparer(LISTE2, LISTE2);
NOEUD noeudCreer(ELEMENT3 e);
void noeudDetruire(NOEUD n);
int supprimer (LISTE2 L, int pos);
#endif // LSTPRIM2_H_INCLUDED
