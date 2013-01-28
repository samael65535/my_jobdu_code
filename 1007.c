#include<stdio.h>
#include<stdlib.h>
/* 注意排序  10 5 5 5 5 1
            1  2 2 2 2 5*/
struct COUNTRY{
  int id, rank;
  double g, m, flag;
  double gp, mp;
};
struct COUNTRY country[1000], country1[4][1000];
int cmp0(const void *a, const void *b)
{
  struct COUNTRY *x = (struct COUNTRY *) a;
  struct COUNTRY *y = (struct COUNTRY *) b;
  x->flag = x->g;
  y->flag = y->g;
  return   y->g > x->g ? 1 : -1;
}
int cmp1(const void *a, const void *b)
{
  struct COUNTRY *x = (struct COUNTRY *) a;
  struct COUNTRY *y = (struct COUNTRY *) b;
  x->flag = x->m;
  y->flag = y->m;
  return y->m > x->m ? 1 : -1;
}
int cmp2(const void *a, const void *b)
{
  struct COUNTRY *x = (struct COUNTRY *) a;
  struct COUNTRY *y = (struct COUNTRY *) b;
  x->flag = x->gp;
  y->flag = y->gp;
  return y->gp > x->gp ? 1 : -1;
}
int cmp3(const void *a, const void *b)
{
  struct COUNTRY *x = (struct COUNTRY *) a;
  struct COUNTRY *y = (struct COUNTRY *) b;
  x->flag = x->mp;
  y->flag = y->mp;
  return y->mp > x->mp ? 1 : -1;
}

int main()
{
  int n, m;
  int rank[1000];
  while(scanf("%d%d", &n, &m)!=EOF){
    int i, k, j, f;
    double p;
    for(i=0; i<n; i++){
      scanf("%lf%lf%lf", &country[i].g, &country[i].m, &p);
      country[i].gp = country[i].g/p;
      country[i].mp = country[i].m/p;
      country[i].id = i;
    }
    for(i=0; i<m; i++){
      scanf("%d", &rank[i]);
      for(j=0; j<4; j++){
	country1[j][i] = country[rank[i]];
	/* printf ("%d\t", country1[j][i].id); */
      }

    }
    qsort(country1[0], m, sizeof(country[0]), cmp0);
    qsort(country1[1], m, sizeof(country[0]), cmp1);
    qsort(country1[2], m, sizeof(country[0]), cmp2);
    qsort(country1[3], m, sizeof(country[0]), cmp3);
    for(i=0; i<4; i++){
      for(j=0; j<m; j++){
	if(country1[i][j-1].flag == country1[i][j].flag){
	  country1[i][j].rank = country1[i][j-1].rank;
	}else{
	  country1[i][j].rank = j;
	}
      }
    }

    /* for(i=0; i<m; i++){ */
    /*   printf ("%d %d\t%d\t%lf\n", i,country1[3][i].id, country1[3][i].rank, country1[3][i].flag); */
    /* } */
    for(i=0; i<m; i++){
      int minrank=65535, min=65535;
      for(j=3; j>-1; j--){
    	for(k=0; k<m; k++){
    	  if(rank[i] == country1[j][k].id){
    	    if(minrank >= country1[j][k].rank){
    	      minrank = country1[j][k].rank;
    	      min = j;

    	    }
    	    /* printf ("%d\t%d\t%lf\n", country1[j][k].id, country1[j][k].rank, country1[j][k].flag); */
    	  }
    	}
      }
      printf ("%d:%d\n", minrank+1, min+1);
    }
    printf ("\n");
  }
  return 0;
}
