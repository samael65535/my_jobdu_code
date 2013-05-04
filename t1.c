#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* 解法一: 快排加二分, 勉强过*/
int num[1000 * 1000];
int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}
int main()
{
  int n, m ;
  while(scanf("%d%d", &n, &m) != EOF){
    int t;
    scanf("%d", &t);
    int i, j;
    memset(num, 0, sizeof(num));
    for(i = 0; i < n * m; i++){
      scanf("%d", &num[i]);
    }
    int *flag = NULL;
    qsort(num, n * m, sizeof(int), cmp);
    flag = (int *)bsearch(&t, num, n * m, sizeof(int), cmp);
    if (flag != NULL)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
