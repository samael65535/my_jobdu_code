#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  board[9], solve[94], sum;
int check(int k)
{
  int i;
  for(i=1; i<k; i++)
    
    if((abs(k - i) == abs(board[k] - board[i])) || board[i] == board[k])return 0;
  return 1;
}
void fun()
{
  int n=8;
  board[1]=0;
  int k=1;
  while(k>0){
    board[k]++;
    while((board[k]<=n)&&!check(k)) board[k]+=1;
    if(board[k]<=n){
      if(k==n){
	int i;
	for(i=1; i<=8; i++){
	  solve[sum]=solve[sum]*10+board[i];
	}
	sum++;
      }else{
	k++;
	board[k]=0;
      }
    }else{
      k--;
    }
  }
}
int main(int argc, char *argv[])
{
  int  i, j, k;
  sum=1;
  memset(board, 0, sizeof(board));
  memset(solve, 0, sizeof(solve));
  fun();
  scanf("%d", &j);
  while(j--){
    while(scanf("%d", &k)!=EOF){
      printf ("%d\n",solve[k]);
    }
  }
  return 0;
}
 
