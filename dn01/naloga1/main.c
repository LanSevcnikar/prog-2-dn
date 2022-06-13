#include <stdio.h>
int main(){
  int a = 0;
  int b = 0;

  int na = 0;
  int nb = 0;

  char i = ' ';

  do{
    i = getchar();
    if(i >= '0' && i <= '9'){
      a *= 10;
      a += i - '0';
    }
    if(i == '-'){
      na = 1;
    }
  }while(i != ' ');

  do{
    i = getchar();
    if(i >= '0' && i <= '9'){
      b *= 10;
      b += i - '0';
    }
    if(i == '-'){
      nb = 1;
    }
  }while(i != '\n');


  if(na) a *= -1;
  if(nb) b *= -1;

  int sum = a + b;
  if(sum < 0){
    putchar('-');
  }

  int y = 0;
  for(int index = 9; index >= 0; index --){
    int pow = 1;
    for (int p = 0; p < index; p++){
      pow *= 10;
    }
    int temp = sum;
    if(temp < 0) temp *= -1;
    temp /= pow;
    temp %= 10;
    if(temp != 0){
      y = 1;
    }

    if(y){
      putchar('0'+temp);
    }
    
  }
  if(!y){
    putchar('0');
  }
  putchar('\n');

  return 0;
}
