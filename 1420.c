#include<stdio.h>
#include<string.h>
int num[1000005];		/* 数组开大些 */
int pack[1000005];
int max(int a, int b)
{
  return a>b?a:b;
}
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i, sum=0, j, tmp;
    memset(num, 0, sizeof(num));
    memset(pack, 0, sizeof(pack));
    for(i=0; i<n; i++){
      scanf("%d", &num[i]);
      sum+=num[i];
    }
    tmp=sum/2;
    for(i=0; i<n; i++){		/* 01背包, 用分治能做吗? */
      for(j=tmp; j>=num[i]; j--){ /* 用sum的一半当背包的容量 */
	pack[j]=max(pack[j], pack[j-num[i]]+num[i]);
      }
    }
    printf("%d\n", sum-2*pack[tmp]);
  }
  return 0;
}

