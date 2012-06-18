#include<stdio.h>
#include<string.h>
int main()
{
  int num1[20], num2[20];
  memset(num1, 0, sizeof(num1));
  memset(num2, 0, sizeof(num2));
  int i=0, sum1=1, sum2=1, j, x=0, y=0;;
  for(j=2; j<=60; j++){
    sum1=1;
    for(i=2; i<j; i++){
      if(j%i==0){
	sum1+=i;
      }
    }
    if(sum1==j){
      num1[x++]=j;
    }
    if(sum1>j)
      num2[y++]=j;
  }
  printf ("E: ");
  for(i=0; i<x-1; i++)
    printf ("%d ", num1[i]);
  printf ("%d\n",num1[i]);

  printf ("G: ");
  for(i=0; i<y-1; i++)
    printf ("%d ", num2[i]);
  printf ("%d\n",num2[i]);

  return 0;
}
