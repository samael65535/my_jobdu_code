#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n)!=EOF && n){
    while(n--){
      int i, sum=0;
      long long t;
      scanf("%lld", &t);
      for(i=1; i<=(int)sqrt(t); i++){
	if(t%i==0) {sum++;}
      }
      sum=sum*2;
      if((int)sqrt(t)*(int)sqrt(t)==t) sum-=1;
      printf ("%d\n", sum);
    }
  }
  return 0;
}
