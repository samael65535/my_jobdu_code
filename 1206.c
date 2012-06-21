#include<stdio.h>
int main()
{
  char a[101], b[101], c[202];
  while(scanf("%s%s", a, b)!=EOF){
    int i=0, j=0; 
    while(a[i]!='\0'){
      c[j]=a[i];
      i++; 
      j++;
    }
    i=0;
    while(b[i]!='\0'){
      c[j]=b[i];
      i++; 
      j++;
    }
    c[j]='\0';
    printf("%s\n", c);
  }
}
