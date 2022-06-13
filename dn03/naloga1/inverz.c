
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c inverz.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>

#include "inverz.h"

long inverz(long x, long a, long b) {
    while(b - a > 1){
      long c = (a + b) / 2;
      if(f(c) > x) b = c;
      else a = c;
    }

    for (a; a < b + 1; a++){
      if(f(a) == x){
        return a;
      }
    }
    
    return -1;
}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
