#include <stdio.h>
int main(){
  char i = ' ';
  char j = ' ';
  do{
    int n ;
    int ans = 1;

    int type = -1;
    i = getchar();
    if(i == '0') j = getchar();

    if( i >= '1' && i <= '9') type = 0;
    if(i == '0'){
      if(j == 'x') type = 2;
      else if(j == 'b') type = 3;
      else type = 1;
    }

    switch (type)
    {
    case -1:
      ans = 0;
      do{
        i = getchar();  
      }while(i != '\n' && i != ' ');
      break;
    case 1:
      
      if(j != ' ' && j != '\n'){
         if(j > '7' || j < '0'){
        ans = 0;
      }
        do{
          i = getchar();
          if(i != ' ' && i != '\n'){
            if(i > '7' || i < '0'){
              ans = 0;
            }
          };   
        }while(i != '\n' && i != ' ');
      }
      break;

    case 2:
      n = 0;
      do{
        n++;
        i = getchar();
        if(i != ' ' && i != '\n'){
          if(i > '9' || i < '0'){
            if(i > 'F' || i < 'A'){
              ans = 0;
            }
          }
        };   

      }while(i != '\n' && i != ' ');
      if(n == 1) ans = 0;
      break;
    case 3:
      n = 0;
      do{
        n++;
        i = getchar();
        if(i != ' ' && i != '\n'){
          if(i > '1' || i < '0'){
              ans = 0;
          }
        };   

      }while(i != '\n' && i != ' ');
      if(n == 1) ans = 0;
      break;
    
    default:
        do{
          i = getchar();
          if(i != ' ' && i != '\n'){
            if(i > '9' || i < '0'){
              ans = 0;
            }
          };   
        }while(i != '\n' && i != ' ');
      break;
    }

  putchar('0' + ans);

  }while(i != '\n');
  putchar('\n');
}
