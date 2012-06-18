#include<stdio.h>
int INF = 99999999;
int main(int argc, char *argv[])
{
  int visit[1002], a[1002], n;
  while(scanf("%d", &n)!=EOF){
    int i,j, count=0, k, t;

    for(i=0; i<n; i++){
      scanf("%d", &a[i]);
      if(visit[a[i]]==1) a[i]=INF;
      else{
	visit[a[i]]=1;
	count++;
      }
    }
    for(i = 0;i < n;i++){
      for(j = i + 1;j < n;j++){
	if(a[j] < a[i]){
	  t = a[i];
	  a[i] = a[j];
	  a[j] = t;
	}
      }
    }
    for(i=0; i<count-1; i++){
      printf ("%d ", a[i]);
    }
    printf ("%d\n",a[i]);
  }
  return 0;
}
