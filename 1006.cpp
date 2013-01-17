#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
  // ifstream cin("input.txt");
  string s;
  while(cin>>s)
    {
      size_t p,q;
      p=s.find('z');
      q=s.find('j');
      while((int)(q-p)>2)
	{
	  s.erase((int)(q+1),(int)p);
	  s.erase((int)(p+1),1);
	  p=s.find('z');
	  q=s.find('j');
	}
      if(p==(s.size()-q-1)&&(q-p)==2)
	cout<<"Accepted\n";
      else
	cout<<"Wrong Answer\n";
    }
}
