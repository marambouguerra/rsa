#include <stdio.h>
#include<stdlib.h>
#include "ELTPRIM3.h"
#include"LSTPRIM2.h"

void element3Lire(ELEMENT3 dest,int y,int n){

            dest.int_pointer[n] = y;

            //printf("%i",dest[n]);

}
ELEMENT3 element3Creer(void) {
    ELEMENT3 L;
    // Allocation de mémoire pour une chaîne de caractères
    L.int_pointer = (int*)malloc(1000 * sizeof(int));
    L.int_member = 0;
    return L;
}



void element3Affecter(ELEMENT3 *e1, ELEMENT3 e2){
    *e1 = e2;
}

void element3Afficher(ELEMENT3 elt) {
    for (int i = 0; i < elt.int_member; i++) {
            printf("%d",elt.int_pointer[i]);
    }

}


void element3Detruire(ELEMENT3 e){
    e.int_member=0;
    free(e.int_pointer);
}

void element3Copier(ELEMENT3 *e1, ELEMENT3 e2) {
    e1->int_member = e2.int_member;
    e1->int_pointer = malloc(sizeof(int));
    *(e1->int_pointer) = *(e2.int_pointer);
}

int element3Comparer(ELEMENT3 l, ELEMENT3 m) {
    int i = 1;
    if (l.int_member == m.int_member) {
        while (i < l.int_member) {
            if (*(l.int_pointer + i) != *(m.int_pointer + i)) {
                return 0;
            }
            i++;
        }
        return 1;
    }
    else {
        return 0;
    }
}
