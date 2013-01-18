#include<stdio.h>
long long num[1000][1000];
void tangle(int x, int c)
{
  int i=0;
  num[x][1]=1;
  for(i=2; i<=x; i++){
    num[x][i] = num[x-1][i] + num[x-1][i-1];
  }
  if(x == c) return;
  else{
    tangle(x+1, c);
  }
}
int main()
{
  int n=0;
  num[1][1]=1;
  while(scanf("%d", &n) != EOF){
    int i, j;
    tangle(1, n);
    for(i=2; i<=n; i++){
      for(j=1; j<i; j++){
	printf ("%lld ", num[i][j]);
      }
      printf ("%lld\n",num[i][j]);
    }
  }
  return 0;
}
