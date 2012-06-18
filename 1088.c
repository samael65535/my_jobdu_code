#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  int l, m;
  while(scanf("%d%d", &l, &m)!=EOF){
    int tree[100002];
    int i,sum=0;
    memset(tree, 0, sizeof(tree));
    while(m--){
      int temp, a, b;
      scanf("%d%d", &a, &b);
      if(a>b){temp=a; a=b; b=temp;}
      for(; a<=b; a++)
	tree[a]=1;
    }
    for(i=0;i<=l;i++)
      if(!tree[i]) sum++;
    printf ("%d\n", sum);
  }
  return 0;
}
