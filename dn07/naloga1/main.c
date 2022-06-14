#include <stdio.h>

int a[10000];
int b[10000];

int max(int a, int b){
  if(a > b) return a;
  return b;
}

int solve(int v){
  int c1 = a[v] + v;
  int c2 = b[v] + v;

  int m = 0;
  if(c1 != v) m = max(m, solve(c1));
  if(c2 != v) m = max(m, solve(c2));

  return m + 1;
}

int main(){
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++){
    scanf("%d %d",&a[i], &b[i]);
  }
  printf("%d\n", solve(0) - 1);

}