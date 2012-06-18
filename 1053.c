#include<stdio.h>
int main()
{
  int n;
  int num[22];
  while(scanf("%d", &n)!=EOF){
    int max=0, min=0;
    int i;
    for(i=0; i<n; i++){
      scanf("%d", &num[i]);
      max=num[max]<num[i]?i:max;
      min=num[min]>num[i]?i:min;
    }
    i=num[max];
    num[max]=num[min];
    num[min]=i;
    for(i=0; i<n-1; i++){
      printf ("%d ",num[i]);
    }
    printf ("%d\n",num[i]);
  }
}
