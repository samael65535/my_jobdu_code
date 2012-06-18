#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
  char A[100];
  char B[100];
  while(scanf("%s%s", A, B)!=EOF){
    int a=0, b=0;
    int i=0, flaga=1, flagb=1;
    if(A[0]=='-') flaga=-1;
    if(B[0]=='-') flagb=-1;
    for(i=0; A[i]; i++){
      if(isdigit(A[i])){
	a*=10;
	a+=A[i]-'0';

      }
    }
    for(i=0; B[i]; i++){
      if(isdigit(B[i])){
	b*=10;
	b+=B[i]-'0';

      }
    }
    a*=flaga;
    b*=flagb;
    printf ("%d\n", a+b);
  }
  return 0;
}
