#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct P{
  int x, y;
};
struct P num[1002];
int cmp(const void *a, const void *b)
{
  struct P *i = (struct P*) a;
  struct P *j = (struct P*) b;
  if(i->x == j->x)
    return i->y - j->y;
  else
    return i->x - j->x;
}
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    memset(num, 0, sizeof(num));
    int i;
    for(i=0; i<n; i++){
      scanf("%d %d", &num[i].x, &num[i].y);
    }
    qsort(num, n, sizeof(num[0]), cmp);
    printf ("%d %d\n",num[0].x, num[0].y);
  }
  return 0;
}
