#include<stdio.h>
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    float x1=5.0, y1=3.0, z1=0.33333;
    int x, y, z;
    for(x=0; x<=n/5; x++)
      for(y=0; y<=n/3; y++)
	for(z=0; z<=n*3; z++)
	  if(x*x1+y*y1+z*z1 <= n)
	    if(x+y+z==100)
	      printf("x=%d,y=%d,z=%d\n", x, y, z);
  }
  return 0;
}
