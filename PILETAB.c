#include <stdlib.h>
#include <stdio.h>
#include "PILEPEIM.h"
#include"ELTPRIM.h"
Pile PileCreer(void) {
Pile P;
P = (Pile) malloc(sizeof(lastruct));
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
for(i = P->Sommet; i >= 1; i--){
        printf("\n");
elementAfficher(P->elements[i]);
printf("\n");
}
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
int Empiler(Pile P, ELEMENT e) {
int succes=1;

if (EstSaturee(P)){

printf ("\n Pile saturée");
succes=0;}

else
{
(P->Sommet)++;
elementAffecter(&P->elements[P->Sommet],e);

}
return(succes);
}

ELEMENT Depiler (Pile P ) {
ELEMENT elt = elementCreer();
if (EstVide(P)) {

printf ("\n Pile vide");
}

else {

elementCopier(&elt, (P->elements)[P->Sommet]);
elementDetruire(P->elements[P->Sommet]);
(P->Sommet)--;
}
return (elt);
}


ELEMENT Sommet (Pile P) {

ELEMENT elt= elementCreer();
if (EstVide(P))

printf (" \n Pile vide");

else

elt = (P->elements[P->Sommet]);

return(elt);
}



Pile PileCopier(Pile P){

Pile PR = PileCreer();

int i;
ELEMENT elt;

for(i =1; i <= P->Sommet; i++) {
elt=elementCreer();
elementCopier(&elt, P->elements[i]);
Empiler(PR, elt);
}
return PR;
}


int PileComparer (Pile P1, Pile P2 )
{
int test= 1;
int i=P1->Sommet;

if (PileTaille(P1) != PileTaille(P2)) test= 0;

while ((i>=1) && (test)) {
if (elementComparer(P1->elements[i], P2->elements[i])!=0)
test=0;
i--;
}

return test;
}
