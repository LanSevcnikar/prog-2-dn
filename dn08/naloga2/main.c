#include <stdio.h>

int canWhiteWin = 0;

int mem[1000];

int solve(int h, int k, int b){
  if(h <= k) {
    return b;
  }
  if(b){
    int temp = 0;
    for (int i = 1; i < k+1; i++){
      int res = solve(h-i,k,abs(b-1));
      if(res) temp = 1;
    }
    return temp;
  }else{
    int temp = 1;
    for (int i = 1; i < k+1; i++){
      int res = solve(h-i,k,abs(b-1));
      if(!res) temp = 0;
    }
    if(temp) mem[h] = 1;
    return temp;
  }
}

int table[1000];

void solve2(int h, int k, int b, int l){
  if(h <= k) {
    for (int i = 0; i < l; i++){
      if(i%2-1){
        printf("%d -> ", table[i]);
      }else{
        printf("[%d] -> ", table[i]);
      }
    }
    printf("%d\n",h);
  }
  if(b){
    for (int i = 1; i < k+1; i++){
      if(mem[h-i]) {
        table[l] = i;
        solve2(h-i,k,abs(b-1),l+1);
      }
    }
  }else{
    for (int i = 1; i < k+1; i++){
      table[l] = i;
      solve2(h-i,k,abs(b-1),l+1);
    }
  }
}

int main(){

  for (int i = 0; i < 1000; i++) mem[i] = 0;
  

  int n,k;
  scanf("%d %d", &n, &k);
  if(!solve(n,k,1)){
    printf("CRNI\n");
  }else{
    solve2(n,k,1,0);
  }
}