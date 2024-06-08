#include <stdlib.h>
#include <stdio.h>
#include "LSTPRIM2.h"
#include"ELTPRIM3.h"
NOEUD noeudCreer(ELEMENT3 e){

NOEUD n;

n =(NOEUD)malloc(sizeof(structNoeud));
if(!n)
printf ("\nPlus d'espace");
else
{
element3Affecter(&n->info, e);
n->suivant = NULL;
}
return n;
}
void noeudDetruire(NOEUD n){
elementDetruire(n->info);
free(n);
}
int estVide(LISTE2 L) {
return (L->lg == 0);
}
int estSaturee(LISTE2 L) {
NOEUD temp;
int saturee = 1;
temp =(NOEUD)malloc(sizeof(structNoeud));
if(temp != NULL) {
saturee = 0; /* mémoire non saturée */
free(temp);
}
return saturee;
}

int listeTaille(LISTE2 L) {
return (L->lg);
}

int inserer (LISTE2 L, ELEMENT3 e, int pos){
int succee=1;
int i;
NOEUD n, p, q;
if (estSaturee(L)){
printf ("\nListe saturée");
succee=0;}
else {
if ((pos < 1) || (pos > L->lg + 1)) {
printf ("\nPosition invalide");
succee=0;
}
else {
n=noeudCreer(e);
if (pos == 1)
{
n->suivant=L->tete;
L->tete = n;
}
else {
q= L->tete;
for (i=1; i<pos; i++) {

p = q;
q = q->suivant;
}
p->suivant=n;
n->suivant=q;
}
(L->lg)++;
}
}
return succee;
}

ELEMENT3 recuperer2(LISTE2 L, int pos) {
ELEMENT3 elt= element3Creer();
int i;
NOEUD p;
if (estVide(L))
printf ("\nListe vide");
else {
if ((pos < 1) || (pos > L->lg))
printf ("\nPosition invalide");

else {

p= L->tete;
for (i=1; i<pos; i++)
p = p->suivant;

element3Affecter(&elt,p->info);
}

}
return(elt);
}


LISTE2 liste2Creer(void) {
LISTE2 L;
L=(LISTE2)malloc(sizeof(laStruct2));
if (! L)
printf("\nProblème de mémoire");
else {
L->lg = 0;
L->tete = NULL; /* initialiser la tête */
}
return(L);
}

void liste2Detruire(LISTE2 L){
int i;
NOEUD p, q;
q= L->tete;
for(i = 1;i <= L->lg; i++)
{
p=q;
q=q->suivant;
noeudDetruire(p);
}
free(L);
}
void liste2Afficher(LISTE2 L){

NOEUD p;
p= L->tete;
for(int i=1;i<=L->lg;i++){
element3Afficher(p->info);
p=p->suivant;
printf("\n");
printf("\n");
}
}
int supprimer (LISTE2 L, int pos ){
int i;
int succee=1;
NOEUD p, q;
if (estVide(L)) {

printf ("\nListe vide");
succee=0;
}
else {

if ((pos < 1) || (pos > L->lg))

{
printf ("\nPosition invalide");
succee=0;
}
else
{
q = L->tete;

if (pos == 1)
L->tete=L->tete->suivant;
else {
for (i=1; i<pos; i++) {
p = q;
q = q->suivant;
}
p->suivant=q->suivant;
}
noeudDetruire(q);
(L->lg)--;

}
}
return succee;
}

