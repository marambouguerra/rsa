#include <stdlib.h>
#include <stdio.h>
#include "PILEPEIM.h"
Pile PileCreer(void) {
Pile P;
P = (Pile) malloc(sizeof(laStruct));
if(!P) {

printf(" \nProblème de mémoire") ;

}
else P->Sommet = 0; //puisque l’indice le plus faible est 1
return(P);

}
void PileDetruire(Pile P){
int i;
for(i = 1; i <= P->Sommet; i++)

elementDetruire(P->elements[i]);

free(P);
}
void PileAfficher(Pile P) {
int i;
for(i = P->Sommet; i >= 1; i--)

elementAfficher(P->elements[i]);

}

int EstVide(Pile P) {
return (P->Sommet == 0);
}

int EstSaturee(Pile P) {
return (P->Sommet == LongMax);
}

int PileTaille(Pile P) {
return (P->Sommet);
}
int Empiler (Pile P, ELEMENT e2,ELEMENT e2) {
int succes=1;

if (EstSaturee(P)){

printf ("\n Pile saturée");
succes=0;}

else
{
(P->Sommet)++;
elementAffecter(&P->elements[P->Sommet], e);

}
return(succes);
}
