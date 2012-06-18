#include<stdio.h>
#include<string.h>
int main()
{
  int n, num[1000];
  while(scanf("%d", &n)!=EOF){
    memset(num, 0, sizeof(num));
    int i=0, sum1=1, j, k=0;
    for(j=2; j<=n; j++){
      sum1=1;
      for(i=2; i<j; i++){
	if(j%i==0){
	  sum1+=i;
	}
      }
      if(sum1==j){
	num[k++]=j;
      }
    }
    for(i=0; i<k-1; i++)
      printf ("%d ", num[i]);
    printf ("%d\n",num[i]);
  }
  return 0;
}
