#include<stdio.h>
int main(){

int k,n,w,total_cost,borrowed;
scanf("%d%d%d",&k,&n,&w);
total_cost=(k*(w*(w+1)))/2;
if(total_cost>n){
 borrowed=total_cost-n;
 printf("%d\n",borrowed);
}
else {
printf("0\n");
}

return 0;
}
