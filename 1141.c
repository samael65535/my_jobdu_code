#include<stdio.h>
int main()
{
  float num[12];
  int i;
  while(scanf("%f",&num[0])!=EOF){
    float sum=num[0];
    for(i=1; i<12; i++){
      scanf("%f", &num[i]);
      sum+=num[i];
    }
    printf("$%.2f\n", sum/12);
  }
  return 0;
}
