#include <string.h>
#include <stdio.h>
/* 解法二: 输入的时候直接去找 */
int num[1000 * 1000];
int main()
{
  int n, m ;
  while(scanf("%d%d", &n, &m) != EOF){
    int t;
    scanf("%d", &t);
    int i, j, flag = 0;
    memset(num, 0, sizeof(num));
    for(i = 0; i < n * m; i++){
      scanf("%d", &num[i]);
      if(num[i] == t)
        flag = 1;
    }
    if (flag != NULL)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
