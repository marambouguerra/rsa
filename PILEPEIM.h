#ifndef PILEPEIM_H_INCLUDED
#define PILEPEIM_H_INCLUDED
#include "PILTAB.h"
Pile PileCreer(void);
void PileDetruire(Pile);
int EstVide(Pile);
int EstSaturee(Pile);
int PileTaille(Pile);
ELEMENT Sommet(Pile);
int Empiler(Pile,ELEMENT);
ELEMENT Depiler(pile);
void PileAfficher(pile);
Pile PileCopier(pile);
int PileComparer(pile,pile);

#endif // PILEPEIM_H_INCLUDED
