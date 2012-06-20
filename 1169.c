#include<stdio.h>
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i, a=0, b=0, c;
    for(i=0; i<n; i++){
      scanf("%d", &c);
      c%2?a++:b++;
    }
    if(b>a) printf ("NO\n");
    else printf("YES\n");
  }
  return 0;
}
