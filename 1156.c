#include<stdio.h>
#include<string.h>
int main()
{
  int p[204], a[204];
  int n, m;
  while(scanf("%d%d", &n, &m)!=EOF){
    memset(p, -1, sizeof(p));
    int i, j;
    for(i=0; i<n; i++){
      scanf("%d", &p[i]);
    }
    int c=0;
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
	if(p[i]==p[j] && i!=j)
	  c++;
      }
      if(c==0)
	printf("BeiJu\n");
      else 
	printf ("%d\n", c);
      c=0;
    }
  }
  return 0;
}
