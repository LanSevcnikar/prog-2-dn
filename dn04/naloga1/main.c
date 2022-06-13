#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++){
    scanf("%d", &b[i]);
  }

  for (int i = 0; i < n; i++){
    int f = 0;
    for (int j = 0; j < n; j++){
      if(a[(i+j)%n] != b[j]){
        f = 1;
        break;
      }
    }
    if(f == 0){
      printf("%d\n",i);
      return ;
    }
  }
}
