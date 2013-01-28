#include<stdio.h>
#include<stdlib.h>
struct STUDENT
{
  int id, sum;
}s[102];
int cmp(const void *a, const void *b)
{
  struct STUDENT *x = (struct STUDENT *)a;
  struct STUDENT *y = (struct STUDENT *)b;
  if(x->sum == y->sum)
    return x->id - y->id;
  else
    return x->sum - y->sum;
}
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i;
    for(i=0; i<n; i++)
      scanf("%d%d", &s[i].id, &s[i].sum);
    qsort(s, n, sizeof(s[0]), cmp);
    for(i=0; i<n; i++)
      printf("%d %d\n", s[i].id, s[i].sum);
  }
  return 0;
}
