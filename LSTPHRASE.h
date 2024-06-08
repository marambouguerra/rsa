#ifndef LSTPHRASE_H_INCLUDED
#define LSTPHRASE_H_INCLUDED

#include"ELTPRIM2.h"
#define LongMax 100 /* longueur maximale d'une liste */
typedef struct {
ELEMENT2 phrase[LongMax]; /* tableau automatique */
int lg; /* taille logique de la liste */
}laStruct,*LISTE1;

#endif // LSTPHRASE_H_INCLUDED
