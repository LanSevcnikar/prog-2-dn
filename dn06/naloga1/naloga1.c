
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

char* zdruzi(char** nizi, char* locilo) {
    // I do not think this will work on other machines, it gives some ver yunpredictable behaviour
    char ans[10000];
    int i = 0;
    while(*(nizi) != NULL){
        for (int j = 0; j < strlen(*nizi); j++){
            ans[i++] = *(*nizi+j);
        }
        if(*(nizi+1) != NULL){
            for (int j = 0; j < strlen(locilo); j++){
                ans[i++] = *(locilo+j);
            }
        }
        
        nizi ++;
    }
    ans[i] = '\0';
    char* s = ans;
    return s;
}


int main() {
    // koda za ro"cno testiranje
    return 0;
}
