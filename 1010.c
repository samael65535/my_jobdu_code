#include<stdio.h>
#include<string.h>
char *num[10]={"zero", 
	       "one",
	       "two",
	       "three", 
	       "four", 
	       "five", 
	       "six", 
	       "seven", 
	       "eight", 
	       "nine"};
int main()
{
  char data[10];
  while(1){
    int flag = 0, a[2] = {0, 0}, j=0, i;
    while(scanf("%s", data)){
      if(strcmp(data, "+")==0){
	j=1;
      }else if(strcmp(data, "=") == 0){
	break;
      }else{
	a[j] = a[j]*10;
	for(i=0; i<10; i++){
	  if(strcmp(data, num[i]) == 0){
	    a[j]+=i;
	    break;
	  }
	}
      }
    }
    if(a[0]+a[1] != 0) printf ("%d\n",a[0]+a[1]);
    else break;
  }
  return 0;
}
