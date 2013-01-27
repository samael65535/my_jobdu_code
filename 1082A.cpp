#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n,m;
vector<string> a,b;

int main(int argc,char* argv[]){
    //freopen("input.txt","r",stdin);
    string s;
    int n;
    while(cin>>n){
        a.resize(0);
        b.resize(0);
        while(n--){
            cin>>s;
            a.push_back(s);
        }
        cin>>m;
        while(m--){
            cin>>s;
            b.push_back(s);
        }
        if(a.size()==1&&find(b.begin(),b.end(),a[0])!=b.end()){
            cout<<"-1"<<endl;
            continue;
        }
        n = 0;
        vector<string>::iterator max = b.begin();
        vector<string>::iterator p;
        bool flag = true;
        while(flag){
            flag = false;
            max = b.begin();
            for(int i=0;i<a.size();i++){
                p = find(b.begin(),b.end(),a[i]);
                if(max<p){
                    max = p;
                }
                if(p!=b.end()){
                    flag = true;
                }
            }
            if(max!=b.end()){
                n++;
            }
            b.erase(b.begin(),max);
        }
        cout<<n<<endl;
    }
    return 0;
}
