#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}
int main(int argc, char *argv[])
{
  int n;
  while(scanf("%d", &n)!=EOF){
    int i, a[104], m, b[104], k;
    for(i=0; i<n; i++){
      scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(i=0; i<m; i++){
      scanf("%d", &b[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    for(i=0; i<m; i++){
      int l=0, mid, r=n-1, k=b[i];
      while(l<=r){ 		/* 注意写法 */
      	mid=(l+r)/2;
      	if(a[mid]<k) l=mid+1;
      	else if(a[mid]>k)r=mid-1;
	else break;
      }
      if(a[mid]==k)printf ("YES\n");
      else printf ("NO\n");
    }
  }
  return 0;
}
