#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  char* inFileName = argv[1];
  char* outFileName = argv[2];

  printf("%s\n", inFileName);
  printf("%s\n", outFileName);

  printf("Hello \n");

  FILE* inFile = fopen(inFileName, "r");
  FILE* outFile = fopen(outFileName, "r");

  printf("Hello \n");

  char vrstica[1002];
  int index = 0;
  while(fgets(vrstica, 1002, inFile) != NULL){
    if(vrstica[strlen(vrstica)-2])
  }

  fclose(inFile);
  fclose(outFile);
}