#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  char s[1005];
  int c[3];
  while(scanf("%s", s) != EOF){
    int i;
    if(strcmp(s, "zoj")==0) printf ("Accepted\n");
    else{
      for(i=0; i<strlen(s); i++)
	if(s[i]=='z') c[0]=i;
	else if(s[i]=='j')c[3]=i;
      z=strlen(s)-y-1;
      if(c[0]*c[1]==c[2] && c[1]>0) printf ("Accepted\n");
      else printf ("Wrong Answer\n");
    }
    /* for (int i = 0; i < 3; ++i){ */
    /*   printf ("%d\n",c[i]);     */
    /* } */
    /* printf ("\n"); */
    memset(s, 0, sizeof(s));
    memset(c, 0, sizeof(c));
  }
  return 0; 
}
