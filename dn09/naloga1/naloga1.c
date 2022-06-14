
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"


VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO) {
    VO** naredili = (VO**)malloc(sizeof(VO*) * 10);
    int index = 0;
    for (int i = 0; i < stStudentov; i++){
      Student student = **(studentje+i);
      for (int j = 0; j < student.stPO; j++){
        if(strcmp(student.po[j].predmet, predmet) == 0){
          (naredili[index]) = &(VO){
            student.vpisna,
            student.po[j].ocena 
          };
          index++;
        }
      }
    }
    *stVO = index;
    return naredili;
}


int main() {

    return 0;
}

