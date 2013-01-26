#include<stdio.h>
/* 注意价格计算的顺序 */
int main()
{
  float n, k;
  while(scanf("%f%f", &n, &k)!=EOF){
    int i=1, flag=0;
    float house=200, money=0;
    for(; i<=20; i++){      
      money+=n;
      if(money>=house){
	flag=1;
	break;
      }
      house = house * (1.0+k/100);
    }
    if(flag){
      printf ("%d\n", i);
    }else{
      printf ("Impossible\n");
    }
  }
  return 0;
}
