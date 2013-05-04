#include <stdio.h>
#include <string.h>
/*
 * 输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，例如，如果输入如下矩阵：
 * 1 2 3 4
 * 5 6 7 8
 * 9 10 11 12
 * 13 14 15 16
 * 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
*/
int num[1005][1005];
int main()
{
  int n, m;

  while(scanf("%d%d", &m, &n) != EOF){

    int i, j;
    memset(num, 0, sizeof(num));
    for(i = 1; i <= m; i++){
      for(j = 1; j <= n; j++){
        scanf("%d", &num[i][j]);
      }
    }
    i = j = 1 ;
    int sum = n * m;
    while(sum > 0){
      while(num[i][j] != 0){
        printf("%d ", num[i][j]);
        num[i][j] = 0;
        j++;
        sum--;
      }
      j--;
      i++;
      while(num[i][j] != 0){
        printf("%d ", num[i][j]);
        num[i][j] = 0;
        i++;
        sum--;
      }
      i--;
      j--;
      while(num[i][j] != 0){
        printf("%d ", num[i][j]);
        num[i][j] = 0;
        j--;
        sum--;
      }
      j++;
      i--;
      while(num[i][j] != 0){
        printf("%d ", num[i][j]);
        num[i][j] = 0;
        i--;
        sum--;
      }
      i++;
      j++;
    }
    putchar('\n');
  }
  return 0;
}
