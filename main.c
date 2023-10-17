#include <stdio.h>

int main(void) {

  //T(k)=(k^2-30k+5)/4
  
  int k;
  int value;
  int i=0;
  int total1=0;
  int total2=0;
  int ave=0;
  int count=0;
  
  printf("enter a value for k: ");
  scanf("%d",&k);

x:  i++;
  value=(i*i-30*i+5)/4;
   if(value>5)
  {
    total1+=value;
  }
  if(value<0)
  {
    total2+=value;
    count++;
  }
  if(i<k)
  {
    goto x;
  }
  if(count!=0)
  {
    ave=total2/count;
  }
  
  printf("the sum of k values above 5 is %d\n",total1);
  printf("the average of the negative k values is %d",ave);

  return 0;
}