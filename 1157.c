#include<stdio.h>
#include<stdlib.h>
int num[10005];
int cmp(const int *a, const int *b)
{
  return *a - *b;
}
int main()
{
  int n;
  while(scanf("%d", &n) && n!=0){
    int i;
    for(i=1; i<=n; i++){
      scanf("%d", &num[i]);
    }
    qsort(num, n+1, sizeof(int), cmp);
    if(n%2==1){
      printf ("%d\n", num[n/2+1]);
    }else{
      printf ("%d\n", (num[n/2]+num[n/2+1])/2);
    }
  }
  return 0;
}
