
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"

int comp(VO** a, VO**b){
  if((*a)->ocena == (*b)->ocena){
    return (*a)->vpisna - (*b)->vpisna;
  }
  return ((*b)->ocena - (*a)->ocena);
}

VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO) {
    VO** naredili = (VO**)malloc(sizeof(VO*) * 1000);
    int index = 0;
    for (int i = 0; i < stStudentov; i++){
      Student student = **(studentje+i);
      for (int j = 0; j < student.stPO; j++){
        if(strcmp(student.po[j].predmet, predmet) == 0 && student.po[j].ocena > 5){
          (naredili[index]) = (VO*)malloc(sizeof(VO));
            *naredili[index] = (VO){
            student.vpisna,
            student.po[j].ocena 
          };
          index++;
        }
      }
    }
    *stVO = index;
    qsort(naredili, index, sizeof(VO), (int (*) (const void *, const void *)) &comp);
    return naredili;
}


int main() {

    return 0;
}

