#include<stdio.h>
#include<stdlib.h>
/* 1.如果是S放入
   2.如果是E则查找S中数组是否有相同的并计算, 注意:无效数据*/
struct BOAT
{
  int id;
  char key;
  int beginH, beginM;
};
struct  SUM
{
  int times;
  float aver;
};
int main()
{
  int i=0;
  int days=1;
  char SE;
  int times=0, SEtimes=0, total=0;
  struct BOAT boats[101];
  struct SUM res[255];
  int hours=0, mins=0;
  while(scanf("%d %c %d:%d",&i, &SE, &hours, &mins)!=EOF && i!=-1){
    if(i==0){
      res[days].times = SEtimes;
      res[days].aver = SEtimes == 0? 0:(float)total/SEtimes+0.5;
      days++;
      times=0, SEtimes=0, total=0;
    }else{
      if(SE == 'S'){
	boats[times].id = i;
	boats[times].key = SE;
	boats[times].beginH = hours;
	boats[times].beginM = mins;
	times++;
      }else if(SE == 'E'){
	/* 对这前出借的船进行查找,计算,并设为无效位 */
	int j, flag=0;
	for(j=0; j<times; j++){
	  if(boats[j].id == i && boats[j].key == 'S'){
	    if(!flag){
	      total += (hours - boats[j].beginH)*60 + (mins - boats[j].beginM);
	      SEtimes++;
	      flag=1;
	      boats[j].key='X';
	    }else{
	      boats[j].key='X';
	    }
	  }
	}
      }
    }
  }
  for(i=1; i<days; i++){
    printf("%d %d\n", res[i].times, (int)res[i].aver);
  }
  return 0;
}
