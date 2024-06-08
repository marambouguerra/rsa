#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define MAX_LINES 100
#define MAX_LENGTH 100
#include"ELTPRIM.h"
#include "PILEPEIM.h"
#include"ELTCHAR.h"
#include "LSTPRIM1.h"
#include"ELTPRIM3.h"
#include "LSTPRIM2.H"
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0)
         return 0;
    }
    return 1;
}
int generateRandomPrime(int MIN, int MAX) {
    int randomNumber;
    do {
        randomNumber = (rand() % (MAX - MIN + 1)) + MIN;
    } while (!isPrime(randomNumber));

    return randomNumber;
}
int gcd(int a, int b) {

    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int areCoprime(int a, int b) {
    return gcd(a,b) == 1;
}

int choisiraleatoire(int tableau[], int taille) {
    if (taille <= 0) {
        printf("Taille du tableau invalide.\n");
        return -1;
    }

    int indexaleatoire = rand() % taille;
    return tableau[indexaleatoire];
}

long long power_mod(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base %= modulus;

    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % modulus;
        }
        exponent >>= 1;
        base = (base * base) % modulus;
    }

    return result;
}

 int modInverse(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) {
        x1 += m0;
    }

    return x1;
}



int main()
{
 srand(time(NULL));
    int minR=10;
    int maxR=100;
    int p,q,n,phi_n,e,d;
    int nombres_premiers[100];
    char words[100][100];
    int chwords[100][100];
    int ligne[10];
    int nb_line=0,stop;
    Pile pileprive;
    Pile pilepublique;
    FILE *fichier= fopen("lesphrases.txt", "r");
if (fichier== NULL) {
    printf("Could not open the file.\n");
   exit(0);
}
else{
        stop=0;
        while(fgets(ligne,100,fichier)!=NULL){
            char*token=strtok(ligne,"\t");
            while(token!=NULL && stop==0){
                if(nb_line<100){
                    strcpy(words[nb_line],token);
                nb_line++;
                }
else{
              printf("manque d'espace ");
                 stop=1;
             }
            token=strtok(NULL,"\t\n");}
        }
fclose(fichier);
}
//for(int i=0;i<nb_line;i++){
   // for(int j=0;j<50;j++){
       // printf("%c",words[i][j]);
   // }
//}
LISTE1 l;
l=liste1Creer();
for(int i =0;i<nb_line;i++){
ELEMENT2 ph;
ph=phraseCreer();
phraseLire(ph,words[i]);
inserer1(l,ph,i+1);
free(e);
}
liste1Afficher(l);

    for (int i = 0; i < 100; i++) {
        nombres_premiers[i] = generateRandomPrime(minR, maxR);
        if (nombres_premiers[i]==nombres_premiers[i+1]){
    do{
       nombres_premiers[i+1]=generateRandomPrime(minR, maxR);
    }while(nombres_premiers[i]==nombres_premiers[i+1]);
}
   // printf("%d\n", nombres_premiers[i]);
    }

int nbr;
printf("give me how many lines do  want to send ");
scanf("%i",&nbr);
int nb=nbr;
pileprive=PileCreer();
pilepublique=PileCreer();
do{
 p= choisiraleatoire(nombres_premiers,100);
  q = choisiraleatoire(nombres_premiers,100);
if (p==q){
    do{
       p=choisiraleatoire(nombres_premiers,100);
    }while(p==q);
}
n=p*q;
//printf("%i",n);
phi_n=((p-1)*(q-1));
do{
e=generateRandomPrime(1, phi_n);
}while(!areCoprime(e,phi_n));
d=modInverse(e,phi_n);
printf("\n");
//printf("p:%i",p);
//printf("\n");
//printf("q:%i",q);
//printf("\n");
//printf("phi_n: %d\n",phi_n);
//printf("e:%d\n",e);
//printf("d:%d\n",d);


ELEMENT eltpv;
ELEMENT eltpb;
eltpv=elementCreer();
eltpb=elementCreer();
elementLire(&eltpv,n,d);
Empiler(pileprive,eltpv);
elementLire(&eltpb,n,e);
Empiler(pilepublique,eltpb);
nb--;
}while(nb>0);
printf("pile publique");
PileAfficher(pilepublique);
printf("\n");
printf("\n");
printf("pile privee");
PileAfficher(pileprive);
printf("\n");
printf("\n");
int long long c,v,h,k;
long long x;
long long int y;
int j;
ELEMENT2 mm;
ELEMENT3 cp;
LISTE2 l2;
l2=liste2Creer();


printf("cryptage");
printf("\n");
for(int i=0;i<nbr;i++){
        cp=element3Creer();
        mm=recuperer1(l,i+1);

j=0;
while (mm[j]!='\0'){
         x=(int)(mm[j]);
        //printf("\n");
      // printf("%i",x);
         c=pilepublique->elements[i+1]->e;
         v=pilepublique->elements[i+1]->n;
         y=power_mod(x,c,v);

element3Lire(cp,y,j);
 j++;
        }
         //n7ot fi taille il element
        cp.int_member=j;
      //element3Afficher(cp);
printf("\n");
inserer(l2,cp,i+1);
    }

liste2Afficher(l2);
printf("\n");
printf("\n");

char hh;
printf("decryptage");
printf("\n");
ELEMENT3 kk;
kk=element3Creer();
for(int i=0;i<nbr;i++){
kk=recuperer2(l2,i+1);
for(int j=0;j<kk.int_member;j++){
h=pileprive->elements[i+1]->e;
v=pileprive->elements[i+1]->n;
        k=power_mod(kk.int_pointer[j],h,v);
        hh=(char)k;
       printf("%c",hh);
       }
     printf("\n");
     printf("\n");
   }



    return 0;
}
