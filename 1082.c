#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 注意访问顺序也已经给了,可以重复 
   本题未AC
*/
struct IP
{ 
    char ip[17];
    int flag;
};
struct IP p[1001];
struct IP s[5001];
int t[5001];

int main()
{
  int n=0, m=0;
  while(scanf("%d", &n) != EOF){
    int i, sum=0, j, k;
    memset(p, 0, 1001);
    memset(s, 0, 5001);
    for(i=1; i<=n; i++){
      scanf("%s", p[i].ip);
      p[i].flag=1;
    }
    scanf("%d", &m);
    for(i=1; i<=m; i++){
      scanf("%s", s[i].ip);
      s[i].flag=0;
    }
    if(n==1){
      for(i=1; i<=m; i++){
	if(!strcmp(s[i].ip, p[1].ip)){
	  sum=-1;
	  break;
	}
	if(sum==-1){
	  printf ("-1\n");
	  continue;
	}
      }
    }
    int q=1, f=1;
    while(f){
      f=0;
      for(i=1; i<=n; i++){
	for(j=q; j<=m; j++){
	  if(!strcmp(s[j].ip, p[i].ip) && p[i].flag==1){
	    p[i].flag=0;
	    if(j>q) q=j;
	    if(q==m) f=1;
	  }
	}
      }
      if(q!=m) sum++;
      for(k=1; k<=n; k++) p[i].flag=1;
    }
    printf ("%d\n", sum);
  }
  return 0;
}
