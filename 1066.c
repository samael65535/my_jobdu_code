#include<stdio.h>
#include<string.h>
char s[21];
int cmp(const void *a, const void *b)
{
  return *(char *) a - *(char *) b;
}
int main()
{
  while(scanf("%s", s)!=EOF){
    qsort(s, strlen(s), sizeof(char), cmp);
    printf ("%s\n", s);
  }
  return 0;
}
