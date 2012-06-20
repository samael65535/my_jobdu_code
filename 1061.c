#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
  char name[105];
  int age;
  int sorce;
}student;
student s[1005];
int cmp(const void *a, const void *b)
{
  student *x = (student*) a;
  student *y = (student*) b;
  if(x->sorce == y->sorce)
    return strcmp(x->name, y->name);
  else 
    return x->sorce - y->sorce;
}
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i;
    for(i=0; i<n; i++){
      scanf("%s%d%d", s[i].name, &s[i].age, &s[i].sorce);
    }
    qsort(s, n, sizeof(s[0]), cmp);
    for(i=0; i<n; i++){
      scanf("%s%d%d", s[i].name, &s[i].age, &s[i].sorce);
    }
  }
  return 0;
}
