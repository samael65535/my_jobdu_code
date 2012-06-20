#include<stdio.h>
int num[50];
int main()
{
  int n, i, j;
  num[0]=0;
  num[1]=num[2]=1;
  for(i=2; i<40; i++){
    num[i]=num[i-2]+num[i-1];
  }
  while(scanf("%d", &n)!=EOF){
    for(i=0; i<n; i++){
      for(j=0; j<=2*i-1; j++)	/* 2*i-1每行的数 */
	printf ("%d ", num[j]);
      printf ("%d\n", num[j]);
    }
  }
  return 0;
}
