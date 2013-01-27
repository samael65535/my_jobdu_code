#include<stdio.h>
#define MOD 10000
unsigned long long  a0, a1, p, q, k;
unsigned long long data[2][2];
/* 使用矩阵快速取幂 注意奇偶次
   | p q |  | p q |  ->     | p*p+q   p*q |   n+1
   | 1 0 |  | 1 0 |  ->     | p         q |   n-1
   并使用秦九韶算法
 */
void fun(unsigned long long k)
{
  unsigned long long t1, t2, t3, t4;
  if(k==0 || k==1) return;
  fun(k/2);
  t1 = (data[0][0]*data[0][0] + data[0][1]*data[1][0])%MOD;
  t2 = (data[0][0]*data[0][1] + data[0][1]*data[1][1])%MOD;
  t3 = (data[1][0]*data[0][0] + data[1][1]*data[1][0])%MOD;
  t4 = (data[1][0]*data[0][1] + data[1][1]*data[1][1])%MOD;
  data[0][0] = t1;
  data[0][1] = t2;
  data[1][0] = t3;
  data[1][1] = t4;
  if(k%2==1){
    t1 = (data[0][0]*p + data[0][1]*1)%MOD;
    t2 = (data[0][0]*q + data[0][1]*0)%MOD;
    t3 = (data[1][0]*p + data[1][1]*1)%MOD;
    t4 = (data[1][0]*q + data[1][1]*0)%MOD;
    data[0][0] = t1;
    data[0][1] = t2;
    data[1][0] = t3;
    data[1][1] = t4;
  }
  return;
}
int main()
{
  unsigned long long res;
  while(scanf("%lld%lld%lld%lld%lld", &a0, &a1, &p, &q, &k)!=EOF){
    data[0][0]=p;
    data[0][1]=q;
    data[1][0]=1;
    data[1][1]=0;
    fun(k-2);
    switch(k){
    case 0: res = a0%MOD; break;
    case 1: res = a1%MOD; break;
    case 2: res = (a1*p+a0*q)%MOD;
    default: res = (data[0][0]*p*a1 + data[1][0]*q*a1 + a0*p*data[0][1] + data[1][1]*a0*q)%MOD;
    }
    printf ("%lld\n",res);
  }
  return 0;
}
