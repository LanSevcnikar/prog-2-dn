
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int writeOutA(int index, A* a, char* cilj);
int writeOutB(int index, B* b, char* cilj);
int writeOutC(int index, C* c, char* cilj);

int writeOutA(int index, A* a, char* cilj){
  if(a == NULL){
    char* n = "NULL";
    strcat(cilj, n);
    index += 4;
  }else{
    cilj[index++] = '{';
    char ans[20];
    sprintf(ans, "%d", a->p);
    strcat(cilj, ans);
    index += strlen(ans);
    cilj[index++] = ',';
    cilj[index++] = ' ';

    index = writeOutB(index, a->b, cilj);

    cilj[index++] = '}';

  }
  return index;
}

int writeOutB(int index, B* b, char* cilj){
  if(b == NULL){
    char* n = "NULL";
    strcat(cilj, n);
    index += 4;
  }else{
    cilj[index++] = '{';
    strcat(cilj, b->q);
    index += strlen(b->q);
    cilj[index++] = ',';
    cilj[index++] = ' ';

    index = writeOutC(index, b->c, cilj);

    cilj[index++] = '}';

  }
  return index;
}

int writeOutC(int index, C* c, char* cilj){
  if(c == NULL){
    char* n = "NULL";
    strcat(cilj, n);
    index += 4;
  }else{
    cilj[index++] = '{';

    if(c->r){
      char* n = "true";
      strcat(cilj, n);
      index += 4;
    }else{
      char* n = "false";
      strcat(cilj, n);
      index += 5;
    }

    cilj[index++] = ',';
    cilj[index++] = ' ';
    index = writeOutA(index, c->a, cilj);
    cilj[index++] = ',';
    cilj[index++] = ' ';
    index = writeOutB(index, c->b, cilj);

    cilj[index++] = '}';
  }
  return index;
}

int izpisiA(A* a, char* cilj) {
  int index = 0;
  index = writeOutA(index, a, cilj);
    // popravite / dopolnite ...
  return index;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
