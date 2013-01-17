#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int num[21],count[11];
  num[0]=0;
  while(scanf("%d", &num[1])!=EOF){
    int max=-1, m;
    memset(count, 0, sizeof(count));
    count[num[1]]++;
    int i;
    for(i=2; i<=20; i++){
      scanf("%d", &num[i]);
      count[num[i]]++;
    }
    for(i=1; i<=10; i++){
      if(max<count[i]){
	m=i;
	max=count[i];
      }
    }
    printf ("%d\n", m);
  }
}
