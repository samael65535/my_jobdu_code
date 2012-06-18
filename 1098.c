#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  char str[10000]; 
  int count[128];
  while(scanf("%s", str)!=EOF){
    int i;
    memset(count, 0, sizeof(count));
    for(i=0; i<strlen(str); i++){
      count[str[i]]++;
    }
    for(i='A'; i<='Z'; i++){
      printf ("%c:%d\n",i, count[i]);
    }
  }
  return 0;
}
