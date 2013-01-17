#include<stdio.h>
long long f=1;
int main()
{
  
  int n;
  while(scanf("%d", &n)!=EOF){
    int i;
    for(i=1; i<=n; i++){
      f=f*i;
    }
    printf ("%lld\n", f);
    f=1;
  }
  return 0;
}
