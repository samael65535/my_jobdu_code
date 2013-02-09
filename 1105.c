#include<stdio.h>
#include<string.h>
int main()
{
  char num[90];
  while(gets(num) != NULL && strcmp(num, "!")!=0){
    int i;
    for(i=0; i<strlen(num); i++){
      if('a' <= num[i] && num[i] <= 'z'){
        printf("%c", 'a' + ('z' - num[i]));
      }else if('A' <= num[i] && num[i] <= 'Z'){
        printf("%c", 'A' + ('Z' - num[i]));
      }else{
        printf("%c", num[i]);
      }
    }
    printf("\n");
  }
  return ;
}
