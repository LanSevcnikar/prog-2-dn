
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int** ap2pp(int(*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic) {
    int n = izvornoStVrstic * N / ciljnoStVrstic;

    int* tabela[ciljnoStVrstic];

    int index = 0;

    for (int i = 0; i < ciljnoStVrstic; i++){
        int t[n+1];
        for (int j = 0; j < n; j++){
            int x = index / N;
            int y = index % N;
            t[j] = (*(kazalec+x))[y];
            index++;
        }
        t[n] = 0;
        
        tabela[i] = &(t[0]);
    
    }
    


    return &tabela[0];
}

int (*pp2ap(int** kazalec, int izvornoStVrstic, int* ciljnoStVrstic))[N] {
    // popravite / dopolnite
    return NULL;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
