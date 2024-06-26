#ifndef ELTPRIM_H_INCLUDED
#define ELTPRIM_H_INCLUDED
#include"ELTINT.h"
void elementLire(ELEMENT *,int ,int);
/* Affichage d'un �l�ment/
void elementAfficher(ELEMENT);
/* Affectation du 2eme argument dans le 1er qui est donc modifi� et pass� par
adresse */
void elementAffecter(ELEMENT*, ELEMENT);
/* Copie du contenu du deuxi�me argument dans le premier, les deux
arguments ont des adresses diff�rentes (duplication)*/
void elementCopier(ELEMENT *, ELEMENT) ;
/* Comparaison des arguments retourne un entier 0, < 0 ou > 0 la
"diff�rence" (e1-e2) */
int elementComparer(ELEMENT, ELEMENT);
/* Cr�ation d'un �l�ment*/
ELEMENT elementCreer(void) ;
/* Lib�ration de m�moire */
void elementDetruire (ELEMENT);

#endif // ELTPRIM_H_INCLUDED
