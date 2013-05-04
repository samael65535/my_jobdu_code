#include <stdio.h>
/* 解法三: 按矩阵性质查找 */
/*
 * 题目描述：
 * 在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 * 输入：
 * 输入可能包含多个测试样例，对于每个测试案例，
 * 输入的第一行为两个整数m和n(1<=m,n<=1000)：代表将要输入的矩阵的行数和列数。
 * 输入的第二行包括一个整数t(1<=t<=1000000)：代表要查找的数字。
 * 接下来的m行，每行有n个数，代表题目所给出的m行n列的矩阵(矩阵如题目描述所示，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 * 输出：
 * 对应每个测试案例，
 * 输出”Yes”代表在二维数组中找到了数字t。
 * 输出”No”代表在二维数组中没有找到数字t。
*/
int num[1000][1000];
int main()
{
  int n, m ;
  while(scanf("%d%d", &n, &m) != EOF){
    int t;
    scanf("%d", &t);
    int i, j;
    memset(num, 0, sizeof(num));
    for(i = 0; i < n; i++){
      for(j = 0; j < m; j++){
        scanf("%d", &num[i][j]);
      }
    }
    int flag = 0;
    int row = 0, col = j-1;
    while(row < i && col >= 0){
      if(num[row][col] == t){
        flag = 1;
        break;
      }
      if (num[row][col] > t){
        col--;
      }
      if (num[row][col] < t){
        row++;
      }
    }
    if(!flag)
      printf("No\n");
    else
      printf("Yes\n");
  }
  return 0;
}
