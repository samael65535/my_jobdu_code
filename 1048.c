#include<stdio.h>
#include<stdlib.h>
int cmp(const float *a, const float *b)
{
  return *a - *b;
}
int main()
{
  float num[3];
  while(scanf("%f %f %f", &num[0], &num[1], &num[2]) != EOF){
    float t=0;
    qsort(num, 3, sizeof(float), cmp);
    t = num[0]*num[0] + num[1]*num[1] - num[2] * num[2];
    if(t == 0){
      printf ("直角三角形\n"); 
    }else if(t > 0){
      printf ("锐角三角形\n");
    }else{
      printf ("钝角三角形\n");
    }
  }
  return 0;
}
