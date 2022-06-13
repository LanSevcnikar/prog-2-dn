
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c tranzitivnost.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>

#include "tranzitivnost.h"

int tranzitivnost(int a, int b) {
    int t = 1;
    int k = 1;
    for (int x = a; x <= b; x++){
      for (int y = a; y <= b; y++){
        for (int z = a; z <= b; z++){
          // tranz
          if (f(x,y) == 1 && f(y,z) == 1){
            if (f(x,z) == 0){
              t = 0;
            }
          }

          // anti
          if (f(x,y) == 1 && f(y,z) == 1){
            if (f(x,z) == 1){
              k = 0;
            }
          }
        }
      }
    }
    
    if(t && k) return 1;
    if(t) return 2;
    if(k) return 3;
    return 4;
}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
