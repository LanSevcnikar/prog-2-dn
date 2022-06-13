
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga2.c
./test01

*/

#include <stdio.h>
#include "naloga2.h"

void zamenjaj(int** a, int** b) {
  int *c = *b;
  *b = *a;
  *a = c;
}

void uredi(int** a, int** b, int** c) {
    int *min, *mid, *max;
    if(**a > **b){
      if(**a > **c){
        if(**b > **c){
          min = *c;
          mid = *b;
          max = *a;
        }else{
          min = *b;
          mid = *c;
          max = *a;
        }
      }else{
        min = *b;
        mid = *a;
        max = *c;    
      }
    }else{
      if(**b > **c){
        if(**a > **c){
          min = *c;
          mid = *a;
          max = *b;
        }else{
          min = *a;
          mid = *c;
          max = *b;
        }
      }else{
        min = *a;
        mid = *b;
        max = *c;    
      }
    }

    *a = min;
    *b = mid;
    *c = max;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
