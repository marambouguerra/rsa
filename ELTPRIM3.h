#ifndef ELTPRIM3_H_INCLUDED
#define ELTPRIM3_H_INCLUDED
#include "ELTCRYPTAGE.h"
void element3Lire(ELEMENT3,int y,int n);

void element3Affecter(ELEMENT3*, ELEMENT3);

void element3Copier(ELEMENT3*,ELEMENT3) ;

int element3Comparer(ELEMENT3, ELEMENT3);

ELEMENT3 element3Creer(void) ;

void element3Detruire (ELEMENT3);

void element3Afficher(ELEMENT3 elt);


#endif // ELTPRIM3_H_INCLUDED
