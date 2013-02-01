#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct COUNT{
  char s[104];
};
int cmp(const void *a, const void *b)
{
  struct COUNT *x = (struct COUNT *)a;
  struct COUNT *y = (struct COUNT *)b;
  return strcmp(x->s, y->s);
}
int main()
{
  struct COUNT count[6000];
  char s[102];
  while(scanf("%s", s)!=EOF){
    memset(count, 0, sizeof(count));
    int i, j, l;
    for(i=0; i<strlen(s); i++){
      for(j=1; j<=strlen(s)-i; j++){
	strncpy(count[l++].s, s+i, j);
      }
    }
    qsort(count, l, sizeof(count[0]), cmp);
    for(i=0; i<l; i++){
      int c=1;;
      while(strcmp(count[i].s, count[i+1].s)==0)
	c++, i++;
      if(c>1)
	printf("%s %d\n",count[i].s, c);
    }

  }
  return 0;
}
