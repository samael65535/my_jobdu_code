#include<stdio.h>
#include<string.h>
int main()
{
  int a, n;
  int num[104];
  while(scanf("%d%d", &a, &n)!=EOF){
    memset(num, 0, sizeof(num));
    int i, tmp=0, flag=0;
    for(i=0; i<n; i++){
      tmp=a*(n-i)+num[i];
      num[i]=tmp%10;
      num[i+1]=tmp/10;
    }
    for(i=n; i>=0; i--){
      if(num[i]==0 && flag == 0) continue;
      else flag = 1;
      if(flag) printf("%d", num[i]);
    }
printf ("\n");
  }
  return 0;
}
