
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

Tocka projekcija(Tocka t, Premica p) {
    if(p.navpicna){
      return (Tocka) { p.n, t.y };
    }else{
      
    }
    return (Tocka) { (Ulomek) {0, 1}, (Ulomek) {0, 1} };
}

int main() {
    return 0;
}
