#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  int n;
  int i, j,num[10002];
  memset(num, 0, sizeof(num));
  for(i=11; i<10001; i++){
    for(j=2; i*j<10001; j++){
      num[j*i]=1;
    }
  }
  while(scanf("%d", &n)!=EOF){
    if(n<11) printf ("-1\n");
    else{
      for(i=11;i<10001 && i<=n ;i+=10){
	if(num[i]==0) printf ("%d ", i);
      }
    }
  }
  return 0;
}
