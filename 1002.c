#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
  int P, T, G1, G2, G3, GJ;
  float grade;
  while(scanf("%d%d%d%d%d%d",  &P, &T, &G1, &G2, &G3, &GJ) != EOF){
    if(P<T || P<G1 || P<G2 || P<G3 || P<GJ) break;
    if(abs(G1-G2)<=T){
      grade = (G1+G2)/2.0;
    }else if(abs(G3-G1)<=T && abs(G3-G2)<=T){
      grade = G2>G1 ? G3>G2?G3:G2 : G1>G3?G3:G1;
    }else if(abs(G3-G1)>T && abs(G3-G2)>T){
      grade = GJ;
    }else{
      grade = abs(G3-G1)<abs(G3-G2)? (G3+G1)/2.0 : (G3+G2)/2.0;
    }
    printf ("%.1f\n",grade);
  }
  return 0;
}
