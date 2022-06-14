#include <stdio.h>
#include <string.h>

char st[1000][1000];
char s[1000];


void solve(int k, int n){
  if(k == n){
    printf("%s\n",s);
    return;
  }
  for (int i = 0; i < strlen(st[k]); i++){
    s[k] = (st[k][i]);
    solve(k+1,n);
  }
  return;
  
}

int main(){
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%s",(st[i]));
  }
  solve(0,n);
}