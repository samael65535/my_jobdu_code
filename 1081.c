#include<stdio.h>
int main(int argc, char *argv[])
{
  long long a0, a1,p,q,k;
  while(scanf("%lld%lld%lld%lld%lld", &a0,&a1,&p,&q,&k)!=EOF){
    long long a2, i, t1, t2;
    if(k==1) a2=a1%10000;
    else if(k==0) a2=a0;
    else{
      for(i=2; i<=k; i++){
	t2=q*a0; t1=p*a1;
	a2=(t1%10000+t2%10000)%10000;
	a0=a1; 
	a1=a2;
      }
    }
    printf ("%lld\n", a2);
  }
  return 0;
}
