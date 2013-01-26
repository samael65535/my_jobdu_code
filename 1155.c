#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for(; n>0; n--){
    int a, max=0, min=65535, r, g;
    scanf("%d", &a);
    for(r=0; r<=a/4+1; r++){
      for(g=0; g<=a/2+1; g++){
	if(a == 4*r+2*g){
	  if(r+g>max) max = r+g;
	  if(r+g<min) min = r+g;
	}
      }
    }
    if(max==0 && min==65535) printf ("0 0\n");
    else printf ("%d %d\n", min, max);
  }
  return 0;
}
