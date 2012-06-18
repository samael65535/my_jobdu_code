#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
  char id[22];
  int m;
  int num[10];
  int sum;
}Student;
int sorce[11];			/* 注意数组上下限 */
Student s[2000];
int n, m, g;
int cmp(const void *a, const void *b)
{
  Student *x = (Student *)a;
  Student *y = (Student *)b;
  if(x->sum != y->sum)
    return y->sum - x->sum;
  else 
    return strcmp(x->id, y->id);
}
int main(int argc, char *argv[])
{
  while(scanf("%d%d%d", &n, &m, &g)!=EOF && n){
    int i, j;
    memset(s, 0, sizeof(s));
    sorce[0]=0;
    for(i=1; i<=m; i++){
      scanf("%d", &sorce[i]);
    }
    for(i=0; i<n; i++){
      int k;
      scanf("%s%d", s[i].id, &k);
      for(j=0; j<k; j++){
	scanf("%d", &s[i].num[j]);
	s[i].sum+=sorce[s[i].num[j]];
      }
    }
    qsort(s, n, sizeof(s[0]), cmp);
    j=0;
    while(s[j].sum>=g) j++;
    printf("%d\n", j);
    for(i=0; i<j; i++){
      printf("%s %d\n", s[i].id, s[i].sum);
    }
  }
  return 0;
}
