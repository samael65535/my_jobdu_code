#include<stdio.h>
#include<stdlib.h>
struct BG{
  int h, l, t;
};
int cmp( const void *a , const void  *b )    //按照截止时间由小到大排序
{
  return ((struct BG *)a)->t < ((struct BG *)b)->t;
}

int bigger(int x, int y)
{
  return x>y?x:y;
}
int main()
{
  int n;
  while(scanf("%d", &n) && n>=0){
    int i, max=0, j=0, f[100]={0}, dp[100][100]={0};
    struct BG bg[31];
    for(i=1; i<=n; i++){
      scanf("%d%d%d", &bg[i].h, &bg[i].l, &bg[i].t);
      max = max<bg[i].t ? bg[i].t : max;
    }
    qsort(bg, n, sizeof(bg), cmp) ;
    for(i=1;i<=n;i++)
      for(j=0;j<=max;j++){
	if(bg[i].l<=j&&bg[i].t>=j)
	  dp[i][j] = dp[i-1][j]>dp[i-1][j-bg[i].l]+bg[i].h? dp[i-1][j]:dp[i-1][j-bg[i].l]+bg[i].h;
	else dp[i][j] = dp[i-1][j];
	/* if(bg[i].l<=j && bg[i].t>=j){ */
	/*   f[j] = bigger(f[j], f[j-bg[i].l]+bg[i].h); */
	/* } */
      }
    j = 0;
    for(i=1;i<=max;i++){
      if(dp[n][i]>j)  j = dp[n][i];
    }
    /* for(i=1;i<=max;i++){ */
    /*   if(f[i]>j)  j = f[i]; */
    /* } */
    printf( "%d\n" , j );                
  }
  return 0;
}
