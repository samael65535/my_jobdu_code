#include <iostream>
#include <stdlib.h>
#define N 100
using namespace std;

int board[N];
int n,sum;

void init()
{
        for(int i = 1; i <= n; i++)
                board[i] = 0;
}

void display()
{
  int i,j;
  cout<<"No."<<sum<<endl;
  for(i = 1; i <= n; i++)
    {
      for(j = 1; j <= n; j++)
	if(board[i] == j)
	  cout<<"Q ";
	else
	  cout<<"X ";
      cout<<endl;
    }
  cout<<endl;
}

bool canPut(int k)
{
        for(int i = 1; i < k; i++)
                if((abs(k - i) == abs(board[k] - board[i])) || board[i] == board[k])
                        return false;//1.是否在同一斜线;2.是否位于同一列
        return true;
}

void Backtrack()
{
  board[1] = 0;
  int k = 1;
  while(k > 0)
    {
      board[k]++;
      while((board[k] <= n) && !(canPut(k)))
	board[k] += 1;
      if(board[k] <= n)
	if(k == n)
	  {
	    sum++;
	    display();
	  }
	else
	  {
	    k++;
	    board[k] = 0;
	  }
      else
	k--;

    }
}

int main()
{
  long kk;
  cout<<"输入皇后个数:";
  while(cin>>n)
    {
      init();
      sum = 0;
      Backtrack();
      cout<<"总共排列方式为:"<<sum<<endl;
      cout<<"输入皇后个数:";
    }
  return 0;
}
