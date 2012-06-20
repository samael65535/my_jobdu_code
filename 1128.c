#include<stdio.h>
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i;
    float k, aver=0.0;
    for(i=0; i<n; i++){
      scanf("%f", &k);
      aver+=k;
    }
printf ("%.2f\n",aver/n);
  }
  return ;
}
