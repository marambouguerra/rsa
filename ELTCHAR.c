#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ELTPRIM2.h"
ELEMENT2 phraseCreer(void) {
    ELEMENT2 L;
    L = (ELEMENT2)malloc(1000 * sizeof(char));
    return L;
}

void phraseLire(ELEMENT2 l, char* mat) {
    strcpy(l, mat);
}

void phraseAffecter(ELEMENT2 *e1, ELEMENT2 e2) {
    *e1 = e2;
}

void phraseAfficher(ELEMENT2 elt, int pos) {
    printf("la phrase num %i\n%s\n", pos, elt);
}
 void phraseDetruire(ELEMENT2 e){
    free(e);
}
int phraseComparer(ELEMENT2 e1, ELEMENT2 e2) {
    if (e1 == NULL && e2 == NULL) {
        return 0;
    }
    if (e1 == NULL || e2 == NULL) {
        return 1;
    }
    while (*e1 != '\0' && *e2 != '\0') {
        if (*e1 != *e2) {
            return 1;
        }
        e1++;
        e2++;
    }
    if (*e1 == '\0' && *e2 == '\0') {
        return 0;
    } else {
        return 1;
    }
}
void phraseCopier(ELEMENT2* elt1, ELEMENT2 elt2) {
    if (elt2 == NULL) {
        *elt1 = NULL;
    }
     else {
        if (*elt1 != NULL) {
            strcpy(*elt1, elt2);
        }
    }
}

