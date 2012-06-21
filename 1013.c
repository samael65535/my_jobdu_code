#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
  char name[100];
  int start;
  int end;
}Person;
Person p[100];
int main()
{
  int n;
  scanf("%d", &n);
  while(n--){
    int i, k, min=1000000000, max=-1;
    char first[100], last[100];
    memset(p, 0, sizeof(0));
    scanf("%d", &k);
    for(i=0; i<k; i++){
      int a,b,c,d,e,f;
      scanf("%s%d:%d:%d%d:%d:%d", p[i].name, &a, &b, &c,&d,&e,&f);
      p[i].start=a*10000+b*100+c;
      p[i].end=d*10000+e*100+f;
      if(p[i].start<min){
	strcpy(first, p[i].name);
	min=p[i].start;
      }
      if(p[i].end>max){
	strcpy(last, p[i].name);
	max=p[i].end;
      }
    }
    printf ("%s %s\n",first, last);
  }
}
