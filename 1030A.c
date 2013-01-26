#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct
{
        int h,l,t,ms;
}Node;

Node bg[33];
int dp[33][100],n,max1;
bool cmp( Node a , Node b )    //按照截止时间由小到大排序
{
        return a.t < b.t;
}



int main()
{
        int i,j;
        while( scanf( "%d" , &n ) && n >= 0 )
        {
                //input
                max1 = 0;
                for( i = 1 ; i <=n ; i++ ){
                        scanf( "%d%d%d" , &bg[i].h , &bg[i].l , &bg[i].t );
                        bg[i].ms = bg[i].t-bg[i].l;
                        if(bg[i].t>max1) max1 = bg[i].t;
                }
                memset(dp,0,sizeof(dp));
                sort( bg , bg+n , cmp );

                for(i=1;i<=n;i++)
                        for(j=0;j<=max1;j++){
                                if(bg[i].l<=j&&bg[i].t>=j)
				  dp[i][j] = dp[i-1][j]>dp[i-1][j-bg[i].l]+bg[i].h? dp[i-1][j]:dp[i-1][j-bg[i].l]+bg[i].h;
                                else dp[i][j] = dp[i-1][j];
                        }
                
                j = 0;
                for(i=1;i<=max1;i++){
                        if(dp[n][i]>j)  j = dp[n][i];
                }
                printf( "%d\n" , j );                
        }
        return 1;
}
