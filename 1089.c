#include<stdio.h>
#include<math.h>
int fun(int a)
{
  int na, i;
  na=a;
  i=0;
  while(na!=0){
    na/=10;
    i++;
  }
  na=0;
  while(a!=0){
    na += (int)pow(10, --i) * (a%10);
    a/=10;
  }
  return na;
}
int main()
{
  int n;
  scanf("%d", &n);
  for(; n>0; n--){
    int i, a, b, c, na, nb, nc, ec;
    scanf("%d %d", &a, &b);
    c=a+b;
    na = fun(a);
    nb = fun(b);
    nc = fun(c);
    /* printf ("%d %d %d\n", a, b, c); */
    /* printf ("%d %d %d\n", na, nb, nc); */
    if(na+nb == fun(c)) printf ("%d\n", c);
    else printf ("NO\n");
  }
  return 0;
}
