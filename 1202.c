#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
  return *(int*)a - *(int*)b;
}
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i=0, num[104];
    for(i=0; i<n; i++){
      scanf("%d", &num[i]);
    }
    qsort(num, n, sizeof(int), cmp);
    for(i=0; i<n; i++){
      printf("%d ", num[i]);
    }
printf ("\n");
  }
}
