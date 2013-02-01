#include<stdio.h>
#include<math.h>
int main()
{
  unsigned long long n;
  while(scanf("%lld", &n)!=EOF){
    double i;
    i =  ceil((sqrt((double)(n*2*4+1))-1)/2);
    printf("%lld\n", (long long)i);
  }
  return 0;
}
