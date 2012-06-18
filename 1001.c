#include<stdio.h>
int main(int argc, char *argv[])
{
  int m,n;
  while(scanf("%d", &m) != EOF){
    if(m==0) break;
    scanf("%d", &n);
    int A[11][11], t, rf;
    int count=0, i, j;
    for(i=0; i<m;i++){
      for(j=0; j<n;j++){
	scanf("%d", &A[i][j]);
      }
    }
    for(i=0; i<m;i++){
      for(j=0; j<n;j++){
	scanf("%d", &t);
	A[i][j] += t;
	if(A[i][j] != 0){
	  rf=1;
	}
      }
      if(rf==0) count++;
      rf = 0;
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
	if(A[j][i] != 0){
	  rf=1;
	  break;
	}
      }
      if(rf==0) count++;
      rf = 0;
    }
    printf ("%d\n", count);
  }
  return 0;
}
