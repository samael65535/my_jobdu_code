#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const void *a, const void *b){
  return *(int*)b-*(int*)a;
}
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n) != EOF){
    int i , suma=0, sumb=0, a=0, b=1;
    int wi[105];
    for(i=0; i<n; i++){
      scanf("%d", &wi[i]);
    }
    qsort(wi, n, sizeof(wi[0]), cmp);
    if(n>1){
      suma+=wi[a];
      wi[a]= 0;
      sumb+=wi[b];
      wi[b]= 0;
      while(a<n && b<n){
	if(sumb>suma){
	  for(;sumb>=suma&&a<n;a++){
	    suma+=wi[a];
	    wi[a]=0;
	  }
	}else if(sumb<suma){
	  for(;sumb<=suma&&b<n;b++){
	    sumb+=wi[b];
	    wi[b]=0;
	  }
	} else {
	  a=a>b?a+1:b+1;
	  suma+=wi[a];
	  wi[a]=0;
	}
      }
      printf ("%d\n",abs(suma-sumb));
    }else printf ("%d\n", wi[0]);
  }
  return 0;
}
