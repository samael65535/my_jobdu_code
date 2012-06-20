#include<math.h>
#include<stdio.h>
#define PI acos(-1)
int main()
{
  double x0, y0, z0, x1, y1, z1;
  while(scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &z0, &x1, &y1, &z1)!=EOF){
    double r=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
    printf ("%.3lf %.3lf\n", r, 4*PI*r*r*r/3);
  }
  return 0;
}
