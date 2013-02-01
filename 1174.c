#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}
int main()
{
  int n;
  int num[1004];
  while(scanf("%d", &n)!=EOF){
    int i, f;
    for(i=0; i<n; i++){
      scanf("%d", &num[i]);
    }
    qsort(num, n, sizeof(int), cmp);
    scanf("%d", &f);
    i=0;
    while(1!=f){
      if(num[i] != num[i+1]) f--;
      i++;
    }
    printf ("%d\n", num[i]);
  }
  return 0;
}
