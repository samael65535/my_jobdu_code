#include<stdio.h>
int main()
{
  int a, b, c;
  for(a=1; a<=9; a++){
    for(b=1; b<=9; b++){
      for(c=1; c<=9; c++){
	if(a*100+b*10+c+100*b+10*c+c== 532)
	  printf ("%d %d %d\n", a, b, c);
      }
    }
  }
}
