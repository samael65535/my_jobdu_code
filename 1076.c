#include<stdio.h>
#include<string.h>
int num[100000];
int fun(int i){
  ;
}
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i;
    memset(num, 0, sizeof(num));
    if(n==1 || n==0){
      printf ("1\n");
    }else{
      num[0]=1;
      for(i=1; i<=n; i++){
	fun(i);
      }
    }
  }
}
