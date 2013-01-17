#include<stdio.h>
#include<stdlib.h>
/* 排序,去重 */
int cmp(const int *a, const int *b)
{
  return *a - *b;
}
int main()
{
  int a[3]={8, 10, 18};
  int sum[1000];
  int t=0;
  int i, j, k, res=0;
  for(i=0; i<6; i++){
    for(j=0; j<5; j++){
      for(k=0; k<7; k++){
	if((i*8+j*10+k*18)!=0)
	  sum[t++]=i*8+j*10+k*18;
      }
    }
  }
  qsort(sum, t, sizeof(int), cmp);
  for(i=0; i<t; i++){
    if(sum[i]!=sum[i+1]) res++;
  }
  printf ("%d\n", res);
  return 0;
}
