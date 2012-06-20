#include<stdio.h>
int main()
{
  int n, a;
  while(scanf("%d%d", &a, &n)!=EOF){
   long long sum;
   int i;
   sum=a;
   for(i=1; i<=n; i++){
     a=a*10+a;
     sum+=a;
   }
   printf("%lld\n", sum);
  }
  return 0;
}
