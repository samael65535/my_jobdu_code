#include<string.h>
#include<stdio.h>
int main()
{
  char s[1005];
  while(scanf("%s", s)!=EOF){
    int i=0, l=strlen(s)-1;
    while(s[i]==s[l-i] && i<=l/2) i++;
    if(i-1==l/2) printf ("Yes!\n");
    else printf("No!\n");
  }
}
