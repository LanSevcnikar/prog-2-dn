#include <stdio.h>
int main(){
  char i = ' ';
  do{
    int ans = 1;


    int jz = 0;
    int fr = 1; 
    int hs = 0;
    int sm = 0;

    do{


      i = getchar();
      if(i == ' ' ) goto skip;
      if(i == '\n') goto skip;
      
      if(!fr){
        if(i == '+' || i == '-'){
          ans = 0;
        }
        hs = 0;
      }

      if(jz){
        ans = 0;
      }

      if(sm == 2) ans = 0;
      if(sm && i == '0') sm++;
      if(sm && i != '0') sm = 0;

      if(fr){
        if(i == '+' || i == '-'){
          hs = 1;
          sm = 1;
        }
        if(i == '0'){
          jz = 1;
        }
      }

      if(i > '9' || i < '0'){
        if(i != '+' && i != '-'){
          ans = 0;
        }
      }

      skip:
      fr = 0;


    }while(i != '\n' && i != ' ');

    if(hs) ans = 0;

    putchar('0' + ans);

  }while(i != '\n');
}
