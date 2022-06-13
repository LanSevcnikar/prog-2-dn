#include <stdio.h>
int main(){
  int n = 0;
  char i = 0;
  int k = 0;
  int y = 0;

  do{
    i = getchar();
    if(y && i == '1') k = 1;
    if(i == '1'){
      y = 1;  
    }
    if(y && i!= '\n') n++;
  }while(i != '\n');

  if(!k) n--;

  y = 0;
  for(int index = 9; index >= 0; index --){
    int pow = 1;
    for (int p = 0; p < index; p++){
      pow *= 10;
    }
    int temp = n;
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
