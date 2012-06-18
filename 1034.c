#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
  return *(int *)b - *(int *)a;
}
int main(int argc, char *argv[])
{
  int m, n;
  while(scanf("%d%d", &n, &m)!=EOF && n && m){
    int i;
    int people[100005];
    for(i=0; i<n; i++){
      scanf("%d", &people[i]);
    }
    qsort(people, n, sizeof(int), cmp);
    for(i=0; i<m-1; i++){
      printf ("%d ",people[i]);
    }
    printf ("%d\n",people[i]);
  }
  return 0;
}

