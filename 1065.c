#include<stdio.h>
int main()
{
  int h;
  while(scanf("%d", &h)!=EOF){
    int i, j;
    for(i=1; i<=h; i++){
      for(j=1; j<=(h-i)*2; j++){
	printf (" ");
      }
      for(j=1; j<=h+2*(i-1); j++){
	printf ("*");
      }
      printf ("\n");
    }
  }
  return 0;
}
