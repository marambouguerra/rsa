#ifndef LSTDECRYPTAGE_H_INCLUDED
#define LSTDECRYPTAGE_H_INCLUDED

#include"ELTPRIM3.h"
typedef struct structNoeud {
ELEMENT3 info;
struct structNoeud * suivant;
} structNoeud, * NOEUD;
typedef struct {
NOEUD tete;
int lg;
} laStruct2,*LISTE2;


#endif // LSTDECRYPTAGE_H_INCLUDED
