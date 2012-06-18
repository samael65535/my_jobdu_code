#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  char a[1005];
  /* char c[8][6]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; */
  int c[26]={      1,1,1,   2,2,2,
  		      3,3,3,   4,4,4,  5,5,5,
  		      6,6,6,6, 7,7,7,  8,8,8,8};
  
  while(scanf("%s", a)!=EOF){
    int i, j, k=0, v;
    for(i=0; i<strlen(a); i++){
      if(c[a[i]-'a']==c[a[i-1]-'a'] && i)  k+=2;
      for(v=1,j=a[i]-'a'; c[j]==c[j-v]; v++) ;
      k+=v;
    }
    printf ("%d\n",k);
  }
  return 0;
}
