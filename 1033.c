#include<stdio.h>
int main()
{
  int n;
  while(scanf("%d", &n)!=EOF && n){
    int i, a[510];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++){
      int m,j;
      if(a[i]!=1){
	if(a[i]%2==0) m=a[i]/2;
	else m=(a[i]*3+1)/2;
	while(m!=1){
	  for(j=0;j<n;j++){
	    if(m==a[j]) a[j]=1;
	  }
	  if(m%2==0) m=m/2;
	  else m=(m*3+1)/2;
	}	
      }
    }
    int check=1;
    for(int i=n-1;i>=0;i--){
      if(a[i]!=1) {
	if(check){
	  printf("%d",a[i]);
	  check=0;
	}
	else
	  printf(" %d",a[i]);
      }
    }
    printf("\n");
  }

  return 0;
}
