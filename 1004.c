#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}
int main(int argc, char *argv[])
{
  int n, m;
  while(scanf("%d", &n)!=EOF){
    int num[2000005], i;
    for(i=0; i<n; i++){
      scanf("%d", &num[i]);
    }
    scanf("%d", &m);
    for(i=n; i<m+n; i++){
      scanf("%d", &num[i]);
    }
    qsort(num, m+n, sizeof(int), cmp);
    printf ("%d\n", num[(m+n-1)/2]);
  }
  return 0;
}
