#include<stdio.h>
#include<string.h>
int p[100005];
int max(int x, int y)
{
  return x>y?x:y;
}
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int wi[105], i, v, sum=0;
    memset(p, 0, sizeof(p));
    for(i=1; i<=n; i++){
      scanf("%d", &wi[i]);
      sum+=wi[i];
    }
    for(i=1; i<n; i++){
      for(v=sum/2; v>=wi[i]; v--)
	if(p[v-wi[i]]+wi[i]<=sum/2)
	  p[v]=max(p[v-wi[i]]+wi[i], p[v]);
    }
    /* for(i=0; i<sum/2; i++) */
    /*   printf ("%d\t",p[i]); */

    /* printf ("\n"); */
    printf ("%d\n", sum-2*p[sum/2]);
  }
  return 0;
}
