#include<stdio.h>
int main()
{
  unsigned long long n, c, sumc, sumn;
  while(scanf("%lld", &n) && n!=0){
    c=n*n;
    sumn=0;
    sumc=0;
    while(n!=0 || c!=0){
      sumc+=c%10;
      sumn+=n%10;
      c/=10;
      n/=10;
    }
    printf ("%lld %lld\n",sumn, sumc);
  }
  return 0;
}
