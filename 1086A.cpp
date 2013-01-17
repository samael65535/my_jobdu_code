#include <fstream>
#include <cstdio>
#include <iostream>
#define T 100000
#define INT long long
using namespace std;
INT a[T], b[T], l[4], c[4];	//l[0]舍弃不用以便对齐题干
INT dp[T], t[4];
int back[4];	//back[0]亦舍弃不用
int A, B;

void backward( int x, int index ){	//x为向后搜时的起点站号
  INT sum = 0;
  back[index] = x+1;
  for( int i=1; sum<=l[index]; i++ ){
    sum = a[x] - a[x-i];
    back[index]--;
    if( back[index] < A )
      back[index] = A;
  }
};

int main()
{
  int i, j, k, n;
  // freopen("THU_1086.txt","r",stdin);//
  while( scanf("%d%d%d%d%d%d", &l[1],&l[2],&l[3],&c[1],&c[2],&c[3])!=EOF ){
    scanf( "%d%d%d", &A, &B, &n );
    a[0] = a[1] = 0;
    for( i=2; i<=n; i++ )
      scanf( "%d", &a[i]);	//%f读浮点数
    if( A > B ){
      int temp = A;
      A = B;
      B = temp;
    }else if( A == B ){
      printf("0\n");
      continue;
    }
    for( i=0; i<=A; i++ )	//初始化 dp[0]dp[1]是虚构的无意义的初始数值
      dp[i] = 0;
    for( i=A+1; i<=B; i++ ){
      k = 0;	//k记录t[]中有效数据的个数
      for( j=1; j<=3; j++ ){
	backward( i, j );
	if( back[j] != i )
	  { k++; t[k] = dp[back[j]]+c[j]; }
      }
      for( j=1; j<=k-1; j++ )
	t[1] = min( t[1], t[j+1] );	//更改t[1]获得最小值
      dp[i] = t[1];
    }
    printf( "%lld\n", dp[B] );
  }
  //while(1);//
  return 0;
}
