#include <stdio.h>
int main(){
  int n, k;
  scanf("%d %d",&n, &k);
  int a[5000000];
  for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  
  int s = 0;
  int e = n-1;

  int sum = 0;

  while(s < e){
    int t = a[s];
    if(t * 2 == k){
      int m = 0;
      while(s < n && a[s] == t) {
        s++;
        m++;
      }
      sum += m*(m-1)/2;
    }else{
      int m = 0;
      int i = 0;
      while(s < n && a[s] == t) {
        s++;
        // printf("%d %d %d\n", s, a[s], t);
        m++;
      }

      while(a[e] + t > k) e--;
      while(a[e] + t == k && e > 0) {
        i++;
        e--;
      }

      int toAdd = 0;
      if(s-1 > e) toAdd += (i * m) / 2;
      else toAdd += i * m;
      sum += toAdd;

      // printf("%d %d %d %d %d %d\n",s, e, m, i, toAdd, sum);
    }
  }

  printf("%d\n",sum);

}
