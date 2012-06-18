#include<string.h>
#include<stdio.h>
int min(int x, int y)
{ 
  return x<y?x:y;
}
int main()
{
  char ch[105];
  while(scanf("%s", ch) && ch[0]!='E'){
    int i;
    int z=0, o=0, j=0;

    for(i=0; i<strlen(ch) && ch[i]!='\0'; i++){

      if(ch[i]=='Z'){z++;}
      if(ch[i]=='O'){o++;}
      if(ch[i]=='J'){j++;}
    }
    while(z||o||j){
      if(z!=0){printf ("Z");z--;}
      if(o!=0){printf ("O");o--;}
      if(j!=0){printf ("J");j--;}
    }
    printf ("\n");
  }
  return 0;
}
