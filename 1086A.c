#include<stdio.h>
#define N 1000000
#define MAX 9999999999
long long a[N]={0,0},s[N];
long long l1,l2,l3,c1,c2,c3;
long long compute(long long start,long long end)
{
  long long i,j;
  for(i=end;i>=start+1;i--)
    {
      a[i]-=a[i-1];
      s[i]=MAX;
    }
  s[start]=0;//
  for(i=start+1;i<=end;i++)
    {
      long long len=0,adition=0;
      for(j=i-1;j>=start;j--)
	{
	  len+=a[j+1];
	  if(len<=l1)
	    adition=c1;
	  else if(len<=l2)
	    adition=c2;
	  else if(len<=l3)
	    adition=c3;
	  else
	    break;
	  if(s[i]>s[j]+adition)
	    s[i]=s[j]+adition;
	}
    }
  return s[end];
}
int main()
{
  long long  start,end;
  long long  n;
  while(scanf("%lld%lld%lld%lld%lld%lld",&l1,&l2,&l3,&c1,&c2,&c3)==6)
    {
      scanf("%lld%lld%lld",&start,&end,&n);
      if(n>=N)
	while(1);
      if(start>end)
	{
	  long long temp=start;
	  start=end;
	  end=temp;
	}
      for(long long i=2;i<=n;i++)
	scanf("%lld",&a[i]);
      printf("%lld\n",compute(start,end));
    }
  return 0;
}
