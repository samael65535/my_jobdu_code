#include <stdio.h>
#include <string.h>
int num[200001];
int res[100001];
int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}
int main()
{
  int n, k;
  while(scanf("%d%d", &n, &k) != EOF){
    memset(num, 0, sizeof(num));
    memset(res, 0, sizeof(res));
    int i, max = -1, sum_num = 0, j;
    for(i = 0; i < n; i++){
      scanf("%d", &num[i]);
      if(sum_num < k){
        res[sum_num++] = num[i];
        if(max < num[i])
          max = num[i];
      }else {
        if(max > num[i]){
          qsort(res, k, sizeof(res[0]), cmp);
          res[k - 1] = num[i];
          max = res[k - 1];
          printf("%d %d %d\n", i, j, max);
        }
      }
      printf("%d\n", max);
    }
    for(i = 0; i < k - 1; i++){
      printf("%d ", res[i]);
    }
    printf("%d\n", res[i]);
  }
}
