#include<stdio.h>
#include<string.h>
/* 注意分析题目
关于条件3：若azbjc成立，则azbojac也成立；显然，azbjc成立，只有a=c,b='o'，则，可知azbojaa成立，再利用条件，azboojaaa也会成立，可以把aa看作c，bo看作b代入条件。
所以，只要 left 'z' mid 'j' right,其中left,mid right 表示o的个数，满足条件mid>0&&lef*mid =rig就满足条件3. */
int main(){
  char str[1000];
  int x=0,y=0,z=0;
  int length,i;
  while(gets(str)!=NULL){
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
