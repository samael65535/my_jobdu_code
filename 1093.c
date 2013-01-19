#include<stdio.h>
#include<string.h>
/* A common typing error is to place the hands on the keyboard one row to the right of the correct position. So "Q" is typed as "W" and "J" is typed as "K" and so on. You are to decode a message typed in this manner. */
/* 用ASCII进行转换把对应的ASCII码 */
/* 注意 getchar 的使用 gets 可能有问题 */
int main()
{
  char *keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  char c;
  char s[128];			/* ASCII码表 */
  int i;
  for(i=0; i<strlen(keyboard); i++){
    s[keyboard[i]] = keyboard[i-1];
  }
  s[' '] = ' ';
  while((c=getchar()) != EOF){
    if(c != '\n')
      printf ("%c", s[c]);
    else 
      printf ("\n");
  }
  return 0;
}

