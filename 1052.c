#include<stdio.h>
#include<string.h>
int main()
{
  int n, num[204];
  while(scanf("%d", &n)!=EOF && n){
    int i, x=-1, k=-1;
    memset(num, 0, sizeof(0));
    for(i=0; i<n; i++){
      scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    for(i=0; i<n; i++){
      if(num[i]==x)
	k=i;
    }
    printf ("%d\n", k);
  }
}
