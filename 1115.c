#include<stdio.h>
int main()
{

  int a;
  while(scanf("%d", &a)!=EOF){
    int i, x=0;
    int num[5];
    for(i=0; i<5; i++){
      scanf("%d", &num[i]);
      if(num[i]<a) 
	x+=num[i];
    }
    printf("%d\n", x);
  }
}
