#include<stdio.h>
int main()
{
  long long num[32];
  num[0] = 0;
  num[1] = 1;
  int i;
  for(i=2; i < 31; i++){
    num[i] = num[i-1] + num[i-2];
  }
  while(scanf("%d", &i) != EOF){
    printf ("%lld\n", num[i]);
  }
  return 0;
}
