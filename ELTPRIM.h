#ifndef ELTPRIM_H_INCLUDED
#define ELTPRIM_H_INCLUDED
#include"ELTINT.h"
void elementLire(ELEMENT *,int ,int);
/* Affichage d'un élément/
void elementAfficher(ELEMENT);
/* Affectation du 2eme argument dans le 1er qui est donc modifié et passé par
adresse */
void elementAffecter(ELEMENT*, ELEMENT);
/* Copie du contenu du deuxième argument dans le premier, les deux
arguments ont des adresses différentes (duplication)*/
void elementCopier(ELEMENT *, ELEMENT) ;
/* Comparaison des arguments retourne un entier 0, < 0 ou > 0 la
"différence" (e1-e2) */
int elementComparer(ELEMENT, ELEMENT);
/* Création d'un élément*/
ELEMENT elementCreer(void) ;
/* Libération de mémoire */
void elementDetruire (ELEMENT);

#endif // ELTPRIM_H_INCLUDED
