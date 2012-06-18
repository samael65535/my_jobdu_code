#include<stdio.h>
#include<string.h>
int main(){
  char str[1000];
  int x=0,y=0,z=0;
  int length,i;
  while(scanf("%s", str)!=EOF){
    length=strlen(str);
    for(i=0;i<length;i++){
      if(str[i]=='z'){
	x=i;
      }
      else if(str[i]=='j'){
	y=i;
      }
    }
    z=length-y-1;
    y-=(x+1);
    if(z==x+x*(y-1)&&y>0){
      printf("Accepted\n");
    }
    else{
      printf("Wrong Answer\n");
    }
  }
}
