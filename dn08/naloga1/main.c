#include <stdio.h>

int ans[15];
int n, k, r;
int count = 0;

int check(){
  for (int i = 0; i < n-1; i++){
    if(ans[i] > ans[i+1]) return 0;
  }
  return 1;
  
}

void solve(int l){
  if(l == k) return;
  for (int i = 0; i < n-r-r+1; i++){
    for (int j = i+r; j < n-r+1; j++){
      int temp[15];
      for (int m = 0; m < n; m++){
        temp[m] = ans[m];
      }
      
      for (int m = 0; m < r; m++){
        ans[i+m] = temp[j+m];
        ans[j+m] = temp[i+m];
      }
      
      if(check()) count++;
      solve(l+1);

      for (int m = 0; m < n; m++){
        ans[m] = temp[m];
      }
    }
    
  }
  
}


int main(){
  scanf("%d %d %d",&n, &k, &r);
  for (int i = 0; i < n; i++){
    scanf("%d",&ans[i]);
  }
  if(check()) count++;
  solve(0);
  printf("%d\n",count);
  return 0;
}