#include <stdlib.h>
#include <stdio.h>
#include "LSTPRIM1.h"
LISTE1 liste1Creer(void) {

LISTE1 L;
L = (LISTE1) malloc(sizeof(laStruct));
if(!L) {

printf(" \nProblème de mémoire") ;
exit(0) ;

}
L->lg = 0;
return(L);

}
void liste1Detruire(LISTE1 L){
int i;
for(i = 1;i <= L->lg; i++)

elementDetruire(L->phrase[i]);

free(L);
}
int inserer1 (LISTE1 L, ELEMENT2 e, int pos) {
int i;
int succee=1;

if (estSaturee1(L)){

printf ("\nListe saturée");
succee=0;}

else {

if ((pos < 1) || (pos > L->lg + 1)) {
printf ("\nPosition invalide");
succee=0;
}
else {

for(i = L->lg; i>= pos; i--)

phraseAffecter(&L->phrase[i+1],L->phrase[i]);
phraseAffecter(&L->phrase[pos], e);
(L->lg)++;
}

}
return(succee);
}
int supprimer1 (LISTE1 L, int pos ) {
int i;
int succee=1;
if (estVide1(L)) {

printf ("\nListe vide");
succee=0;}

else {

if ((pos < 1) || (pos > L->lg)) {

printf ("Position invalide");
succee=0;}

else {
phraseDetruire(L->phrase[pos]);
for(i=pos;i<=L->lg;i++)

phraseAffecter(&L->phrase[i],
L->phrase[i+1]);

(L->lg)--;
}

}
return(succee);
}


ELEMENT2 recuperer1(LISTE1 L, int pos) {
ELEMENT2 elt= phraseCreer();
if (estVide1(L))

printf ("Liste vide");

else {

if ((pos < 1) || (pos > L->lg))

printf ("\nPosition invalide");

else

elt=(L->phrase[pos]);

}

return(elt);
}

int liste1Taille(LISTE1 L) {
return (L->lg);
}

LISTE1 listeCopier(LISTE1 L){

LISTE1 LR = liste1Creer();

int i;
ELEMENT2 elt;

for(i = 1;i <= L->lg; i++) {
elt=phraseCreer();
phraseCopier(elt,recuperer1(L,i));
inserer1(LR, elt, i);
}
return LR;
}
int liste1Comparer (LISTE1 L1,LISTE1 L2 )
{
int test= 1;
int i=1;
if (liste1Taille(L1) != liste1Taille(L2)) test= 0;
while ((i<=liste1Taille(L1))&&(test)) {
if (phraseComparer(recuperer1(L1,i),recuperer1(L2,i))!=0)
test=0;
i++;
}
return test;
}
void liste1Afficher(LISTE1 L) {
int i;
for(i = 1; i <= L->lg; i++)

phraseAfficher(L->phrase[i],i);

}

int estVide1(LISTE1 L) {
return (L->lg == 0);
}

int estSaturee1(LISTE1 L) {
return (L->lg == LongMax);
}


