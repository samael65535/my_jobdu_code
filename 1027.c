#include<stdio.h>
#include<string.h>
int g[1002][1002];
/*   除了起点和终点外,其他点的度数都应为偶数. 题目中要求是回到原点, 所以都应为偶数, 可用一维数组优化 */
int main()
{
  int n, m;
  while(scanf("%d%d", &n, &m)!=EOF && n!=0){
    memset(g, 0, sizeof(g));
    int i=1, j, a, b, v=0, s=0, flag=1;
    for(i=1; i<=m; i++){
      scanf("%d%d", &a, &b);
      g[a][b]=1;
      g[b][a]=1;
    }
    for(i=1; i<=n; i++){
      for(j=1; j<=n; j++){
	v+=g[i][j];
      }
      if(v%2==1){
	flag=0;
      }
    }
    
    printf("%d\n", flag);
  }
  return 0;
}
