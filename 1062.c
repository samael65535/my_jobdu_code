#include<stdio.h>
int main()
{
  float  n;
  while(scanf("%f", &n)!=EOF){
    float y;
    if(n>=0 && n < 2)
      y=2.5-n;
    if(n>=2 && n < 4)
      y=2-1.5*(n-3)*(n-3);
    if(n>=4 && n < 6)
      y=n/2-1.5;
    printf ("%.3f\n", y);
  }
}
