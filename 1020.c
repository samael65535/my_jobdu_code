#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int a, b;
  int i=0, flag=1;
  int maxx=-300, maxy=-300, minx=300, miny=300;
  while(scanf("%d%d", &a, &b)!=EOF ){
    if(flag==0 && a==0 && b==0){
      break;
    }
    if(a==0 && b==0){
      printf ("%d %d %d %d\n",minx, miny, maxx, maxy);
      maxx=-300;maxy=-300;minx=300;miny=300;
      flag=0;
    }else{
      maxx=a>maxx?a:maxx;
      maxy=b>maxy?b:maxy;
      minx=a<minx?a:minx;
      miny=b<miny?b:miny;
      flag=1;
    }
  }
  return 0;
}
