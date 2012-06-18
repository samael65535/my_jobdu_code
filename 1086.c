#include<stdio.h>
#include<string.h>
long long a[1000005];
long long sum[1000005];
int main(int argc, char *argv[])
{
  long long l1, l2, l3;
  long long c1, c2, c3;
  long long n, A, B;
  while(scanf("%lld%lld%lld%lld%lld%lld", &l1,&l2,&l3,&c1,&c2,&c3)==6){
    scanf("%lld%lld", &A, &B);
    scanf("%lld", &n);
    long long i, j, d, min, temp=0, p=0;
    a[0]=a[1]=0; sum[A]=0;
    for(i=2; i<=n; i++){
      scanf("%lld", &a[i]);
    }
    memset(sum, 0, sizeof(sum));
    if(A>B){temp=A;A=B;B=temp;}
    else if(A==B) { printf ("0\n"); continue;}
    for(i=A+1; i<=B; i++){
      d=0;temp=0;
      min=9999999999;
      for(j=i-1; j>=A; j--){
	d=a[i]-a[j];
	if(d<=l1){ temp=sum[j]+c1;}
	else if(d>l1 && d<=l2){ temp=sum[j]+c2;}
	else if(d>l2 && d<=l3){ temp=sum[j]+c3;}
	if(temp<min){
	  min=temp;
	  p=j;
	}
      }
      d=a[i]-a[p];
      if(d<=l1){ sum[i]=sum[p]+c1;}
      else if(d>l1 && d<=l2){ sum[i]=sum[p]+c2;}
      else if(d>l2 && d<=l3){ sum[i]=sum[p]+c3;}
      /* printf ("%lld %lld %lld %lld\n", a[i] ,p, min, sum[i]); */
    }
    printf ("%lld\n", sum[B]);
  }
  return 0;
}
