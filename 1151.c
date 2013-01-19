#include<stdio.h>
/* 按位操作,注意符号优先级 */
int main()
{
  int n;
  scanf("%d", &n);
  for(; n>0; n--){
    unsigned int a, b, i, flag=0;
    scanf("%d%d", &a, &b);
    for(i=1; i<17; i++){
      if(a==b){
    	flag=1;
    	break;
      }
      if((a&0x8000) == 0x8000){
	a= ((0x7fff&a)<<1) + 1;
      }
      else a=(0x7fff&a)<<1;
      /* printf ("%d %d\n", a, b); */
    }
    if(flag) printf ("YES\n");
    else printf ("NO\n");
  }
  return 0;
}
