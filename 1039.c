#include<stdio.h>

int main()
{
  int n;
  long long num[100005];
  while(scanf("%d", &n)!=EOF){
    int i;
    for(i=0; i<n; i++){
      scanf("%lld", &num[i]);
    }
    for(i=n-1; i>0; i--){
      printf("%lld ", num[i]);
    }
    printf ("%lld\n", num[i]);
  }
}
