#ifndef LSTPRIM1_H_INCLUDED
#define LSTPRIM1_H_INCLUDED
#include "LSTPHRASE.h"
LISTE1 liste1Creer(void);
void liste1Detruire(LISTE1);
int estVide1(LISTE1);
int estSaturee1(LISTE1);
int liste1Taille(LISTE1);
ELEMENT2 recuperer1(LISTE1, int);
int inserer1(LISTE1, ELEMENT2,int);
int supprimer1(LISTE1, int);
void liste1Afficher(LISTE1);
LISTE1 liste1Copier(LISTE1);
int liste1Comparer(LISTE1, LISTE1);

#endif // LSTPRIM1_H_INCLUDED
