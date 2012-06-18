#include<stdio.h>
/* 数论题,注意理解 */
long long gcd(long long x, long long y)
{
  return y<=0?x:gcd(y, x%y);
}
int main(int argc, char *argv[])
{
  long long a, b, x, y;
  while(scanf("%lld%lld%lld%lld", &a,&b,&x,&y)!=EOF){
    long long m=gcd(x, y), t, q, p; 
    x/=m; y/=m;
    if(x>y){
      t=a/x;
      do{
	p=t*x;
	q=t*y;
	if(p<=a && q<=b) break;
      }while(t--);
      if(t==0){p=0; q=0;}
    }else{
      t=b/y;
      do{
	q=t*y;
	p=t*x;
	if(p<=a && q<=b) break;
      }while(t--);
      if(t==0){p=0; q=0;}
    }
    printf ("%lld %lld\n", p, q);
  }
  return 0;
}
