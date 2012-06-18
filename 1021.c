#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  char a[5], b[80];
  int c[129]={0};
  while(gets(a) && a[0]!='#'){
    gets(b);
    int i;
    for(i=0; i<strlen(b); i++)
      c[b[i]]+=1;
    for(i=0; i<strlen(a); i++)
      printf ("%c %d\n",a[i], c[a[i]]);
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
  }
  return 0;
}
