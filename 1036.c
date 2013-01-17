#include<stdio.h>
int main()
{
  int n, x, y, z;
  while(scanf("%d", &n)!=EOF){
    int tmp ,sum, i, j, maxper=-1, mi, mj;
    scanf("%d%d%d",&x,&y,&z);
    tmp=x*1000+y*100+10*z;
    for(i=9; i>=1; i--){
      for(j=9; j>=0; j--){
	sum=tmp+j+i*10000;
	if(sum%n==0 && maxper<sum/n){
	  maxper=sum/n;
	  mi=i;
	  mj=j;
	}
      }
    }
    if(maxper!=-1)
      printf ("%d %d %d\n",mi,mj,maxper);
    else 
      printf ("0\n");
  }
  return 0;
}
