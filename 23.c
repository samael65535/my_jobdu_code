#include<stdio.h>
/* 异或性质,注意要把两个数分成两组 */
int count[1000002];
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i, c=1, k=0;
    for(i=0; i<n; i++){
      scanf("%d", &count[i]);
      k = k ^ count[i];
    }
    int a=0,b=0;
    while(!(k&c)) c = c << 1;
    for(i=0; i<n ;i++){
      if(count[i] & c){
	a ^= count[i];
      }
      else  b ^= count[i];
    }
    if(a>b)
      printf ("%d %d\n", b, a);
    else
      printf ("%d %d\n", a, b);
  }
}
