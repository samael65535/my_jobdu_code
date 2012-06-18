#include<stdio.h>
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n) != EOF){
    if(n<=1) printf ("no\n");
    else{
      int i, flag=0;
      for(i=2; i*i<=n; i++){
	if(n%i==0){
	  flag=1;
	  break;
	}
      }
      if(flag) printf ("no\n");
      else printf ("yes\n");
    }
  }
  return 0;
}

