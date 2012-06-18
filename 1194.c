#include<stdio.h>
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n) != EOF){
    printf ("%o\n", n);
  }
  return 0;
}
