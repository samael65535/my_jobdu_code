#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmpstr(const void *a,const void *b)
{
  int len=strlen(a)<strlen(b)?strlen(a):strlen(b);
  char sa[201];
  char sb[201];
  strcpy(sa, a);
  strcpy(sb, b);
  int i;
  for(i=0; i<=len; i++){
    if(tolower(sa[i]) == tolower(sb[i])) continue;
    else if(tolower(sa[i])>tolower(sb[i])) return 1;
    else return -1;
  }
  return strlen(a)-strlen(b);
}
int main(int argc, char *argv[]){
  int n;
  char s[201][201];
  int i;
  while(scanf("%d", &n) != EOF){
    getchar();
    for(i=1; i<=n; i++)
      gets(s[i]);
    qsort(s, n+1 ,sizeof(s[0]),cmpstr);
    for(i=1; i<=n; i++){
      printf ("%s\n", s[i]);
    }
  }
  return 0;
}
