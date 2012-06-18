#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
  char a[12], b[12];
  while(scanf("%s%s", a, b)!=EOF){
    int sum=0, i, j;
    for(i=0; i<strlen(a); i++){
      for(j=0; j<strlen(b); j++){
	sum+=(a[i]-'0')*(b[j]-'0');
      }
    }
    printf ("%d\n", sum);
  }
  return 0;
}
