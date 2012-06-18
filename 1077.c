#include<stdio.h>
#include<string.h>
long long num[1000005], temp=0;
long long max(long long a, long long b)
{
  return a>b?a:b;
}
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n) != EOF){
    int i;
    for(i=0; i<n; i++){
      scanf("%lld", &num[i]);
      if(temp<num[i]) temp=num[i];
    }
    temp=num[0];
    for(i=0; i<n; i++){
      if(num[i]+num[i-1]>0 && i>0){
	num[i]=max(num[i]+num[i-1], num[i]);
      }
      if(num[i]>temp) temp=num[i];
    }
    printf("%lld\n", temp);
    temp=0;
  }
  return 0;
}
