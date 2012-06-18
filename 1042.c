#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 最大公共子序列 */
int max(int i, int j)
{
  return i>j?i:j;
}
int main(int argc, char *argv[])
{
  char a[1002], b[1002];
  while(scanf("%s", a)!=EOF){
    scanf("%s", b);
    int c[1004][1004], i, j;
    memset(c, 0, sizeof(c));
    for(i=0; i<strlen(a); i++){
      for(j=0; j<strlen(b); j++){
	if(a[i]==b[j])
	  c[i+1][j+1]=c[i][j]+1;
	else 
	  c[i+1][j+1]=max(c[i][j+1], c[i+1][j]);
      }
    }
    printf ("%d\n",c[i][j]);
  }
  return 0;
}
