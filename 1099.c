#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 注意strcmp就是按字典序比较的 */
char word[100];
struct split{
  char s[100];
} t[100];

int cmp(const void *a, const void *b)
{
  return strcmp(((struct split *)a)->s, ((struct split *)b)->s);
}
int main()
{
  while(gets(word)!=NULL){
    int i=strlen(word)-1, j;
    for(j=i; j<strlen(word)&&j>=0; j--){
      strcpy(t[j].s, word+j);
    }
    qsort(t, strlen(word), sizeof(t[0]), cmp);
    for(i=0; i<strlen(word); i++){
      printf ("%s\n", t[i].s);
    }
  }
  return 0;
}
