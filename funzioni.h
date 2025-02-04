#include <iostream>
using namespace std;

// Dichiarazione della funzione
int somma(int a, int b){
    return a + b;
}
// Funzione per sottrazione
int sottrai(int a, int b) {
    return a - b;
}

// Funzione per moltiplicazione
int moltiplica(int a, int b) {
    return a * b;
}

float media(float array[200],int c,float casa){
    float media=0.0;
    int dimensione_logica=1;
    int i=0;
    i=i+casa;
    while (array[i]!=0)
    {
        media+=array[i];
        dimensione_logica++;
        i++;
    }
    media=media/dimensione_logica;

    return media;
}