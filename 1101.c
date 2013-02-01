#include<stdio.h>
/* 两次遍历找到从头到尾与从尾到头 */
int main()
{
  int k;
  int num[10006], num2[10006];
  while(scanf("%d", &k)!=EOF && k!=0){
    int i;
    int a=1, b=1, max=0, cur_max=0, f=0;
    for(i=1; i<=k; i++){
      scanf("%d", &num[i]);
      if(num[i]>=0)  f=1;
    }
    if(f==1){
      max = num[1];
      cur_max = 0;
      for(i=1; i<=k; i++){
	cur_max += num[i];
	if(cur_max > max){
	  max = cur_max;
	  a = i;
	}
	if(cur_max < 0){
	  cur_max = 0;
	}
      }
      cur_max = 0;
      max = num[k];
      for(i=k; i>=1; i--){
	cur_max += num[i];
	if(cur_max >= max){
	  max = cur_max;
	  b = i;
	}
	if(cur_max < 0){
	  cur_max = 0;
	}
      }
    }else{
      max = 0;
      a = 1;
      b = k;
    }
    printf ("%d %d %d\n",max, num[b], num[a]);
  }
}
