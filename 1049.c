#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
  char *s=(char *)malloc(sizeof(char)*100);
  char c;
  while(scanf("%s\n%c", s,&c)!=EOF){
    int i;
    for(i=0; i<strlen(s); i++){
      if(s[i]==c) continue;
      printf("%c",s[i]);
    }
    memset(s, 0, sizeof(s));
    printf ("\n");
  }
}
