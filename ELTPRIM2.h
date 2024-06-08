#ifndef ELTPRIM2_H_INCLUDED
#define ELTPRIM2_H_INCLUDED
#include"ELTCHAR.h"
void phraseLire(ELEMENT2 E,char*mat );

void phraseAffecter(ELEMENT2*, ELEMENT2);

void phraseCopier(ELEMENT2 *, ELEMENT2) ;

int phraseComparer(ELEMENT2, ELEMENT2);

ELEMENT2 phraseCreer(void) ;

void phraseDetruire (ELEMENT2);

void phraseAfficher(ELEMENT2 elt,int);
#endif // ELTPRIM2_H_INCLUDED
