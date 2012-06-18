#include<stdio.h>
int main(int argc, char *argv[])
{
  int i;
  while(scanf("%d", &i)!=EOF && i){
    int step=0;
    while(i!=1){
      if(i%2==0) i=i/2;
      else i=(3*i+1)/2;
      step++;
    }
    printf ("%d\n", step);
  }
  return 0;
}
