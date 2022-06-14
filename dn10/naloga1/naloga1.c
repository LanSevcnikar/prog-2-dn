
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

Vozlisce* zdesetkaj(Vozlisce* zacetek, int k) {
  if(k == 1){
    Vozlisce* actualStart = zacetek;
    Vozlisce* start = zacetek;
   
    while (zacetek->naslednje){
      int b = 0;
      for (int i = 0; i < k; i++){
        if(zacetek->naslednje){
          if(i == k-1) b = 1;
          zacetek = zacetek->naslednje;
        }
      }
      if(b){
        start->naslednje = zacetek;
        start = zacetek;
      }
    }
    
    return actualStart;
  }else{
    Vozlisce* actualStart = zacetek;
    Vozlisce* start = zacetek;
    int b = 0;
    for (int i = 0; i < k-1; i++){
      if(zacetek->naslednje){
        if(i == k-2) b = 1;
        zacetek = zacetek->naslednje;
      }
    }
    if(b){
      actualStart = zacetek;
      start = zacetek;
    }
    while (zacetek->naslednje){
      int b = 0;
      for (int i = 0; i < k; i++){
        if(zacetek->naslednje){
          if(i == k-1) b = 1;
          zacetek = zacetek->naslednje;
        }
      }
      if(b){
        start->naslednje = zacetek;
        start = zacetek;
      }else{
        start->naslednje = NULL;
      }
    }
    
    return actualStart;
  }
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
