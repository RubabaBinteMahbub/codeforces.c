#include<stdio.h>
int main()
{
int x,min_step;
scanf("%d",&x);
min_step= x/5 ;
if(x%5!=0){
min_step++;
}
printf("%d\n",min_step);
return 0;
}
