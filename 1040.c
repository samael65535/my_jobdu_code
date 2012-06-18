#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long k[200005];
int main(int argc, char *argv[])
{
  int n, i, j;
  k[0]=k[1]=0;
  for(i=2; i<200005; i++){
    k[i]=i;
  }
  for(i=2; i<200005; i++){
    for(j=2; j*i<200005; j++)
      k[j*i]=0;
  }
  /* for(i=1; i<100; i++) */
  /*   printf("%lld\t", k[i]); */
  while(scanf("%d", &n)!=EOF){
    i=1;
    j=1;
    while(i<=n){
      if(k[j++]!=0) i++;
      /* printf ("%d\t", j); */
    }
    /* printf ("\n"); */
    printf("%lld\n", k[j-1]);
  }
  return 0;
}
