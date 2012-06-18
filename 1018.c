#include<stdio.h>
#include<string.h>
/* 直接用数组记录就行,不用先记录再统计 */
int main()
{
  int n;
  int s[103];
  while(scanf("%d", &n)!=EOF && n){
    int i, k, sum=0;
    memset(s, 0, sizeof(s));
    for(i=1; i<=n; i++){
      scanf("%d", &k);
      s[k]++;
    }
    scanf("%d", &k);
    printf ("%d\n",s[k]);
  }
  return 0;
}
