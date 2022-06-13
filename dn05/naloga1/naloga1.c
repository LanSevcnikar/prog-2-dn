
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga1.c
./test01

*/

#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int* poisci(int* t, int* dolzina, int** konec) {
  int* s = t;
  int* e = t;
  while(*s != 0) s--;
  while(*e != 0) e++; 
  s++;
  e--;

  // printf("%d %d %d", s, e, e-s);

  *dolzina = (e-s + 1);
  *konec = e;  
  return s;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
