#include<stdio.h>
int main()
{
  int num[10];
  int t;
  while(scanf("%d", &t)!=EOF){
    int i;
    int max=t;
    for(i=1; i<10; i++){
      scanf("%d",&num[i]);
      max=num[i]>max?num[i]:max;
    }
printf ("max=%d\n",max);
  }
  return 0;
}
