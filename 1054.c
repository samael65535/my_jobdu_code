#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
  return *(char *)a - *(char *)b;
}
int main()
{
  char s[205];
  while(scanf("%s", s)!=EOF){
    int n=strlen(s);
    qsort(s, n, sizeof(s[0]), cmp);
    printf("%s\n", s);
  }
}
