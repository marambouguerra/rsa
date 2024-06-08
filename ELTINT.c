#include <stdio.h>
#include "ELTPRIM.H"
#define ELEMENT_VIDE 32767

ELEMENT elementCreer (void) {
ELEMENT L;
L = (ELEMENT) malloc(sizeof(clees));
return L;
}

void elementDetruire (ELEMENT elt) {
free (elt);
}
void elementAffecter(ELEMENT * e1, ELEMENT e2) {

*e1 = e2 ;}

void elementCopier(ELEMENT * e1, ELEMENT e2) {
(*e1)->n = e2->n;
(*e1)->e = e2->e;}
void elementLire(ELEMENT *elt,int a,int b) {
(*elt)->n=a;
(*elt)->e=b;
}

void elementAfficher(ELEMENT elt) {
printf("(%i,%i)",elt->n,elt->e);
}

int elementComparer(ELEMENT e1, ELEMENT e2)
{
return ((e1->n)-(e2->n)) ;
}
