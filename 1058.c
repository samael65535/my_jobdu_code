#include<stdio.h>
int main()
{
  char s[5];
  while(scanf("%s", s)!=EOF){
    int i=3;
    for(i=3; i>=0; i--){
      printf("%c", s[i]);
    }
    printf ("\n");
  }
  return 0;
}
