#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char word[100];
struct split{
  char s[100];
} t[100];

int cmp(const void  *a, const void *b)
{
  return (int)(strlen((*(struct split *)a).s) - 
	       strlen((*(struct split *)b).s));
}
int main()
{
  int n;
  while(scanf("%d\n", &n)!=EOF){
    memset(t, 0, sizeof(t));
    int i=0, k=0; 
    char temp[100];
    for(i=0; i<n; i++){
      gets(temp);
      if(strcmp(temp, "stop")==0){
	break;
      } else{
	strcpy(t[i].s, temp);
	k=i;
      }
    }
    qsort(t, k+1, sizeof(t[0]), cmp);
    for(i=0; i<=k; i++){
      printf ("%s\n", t[i].s);
    }
  }
  return 0;
}
