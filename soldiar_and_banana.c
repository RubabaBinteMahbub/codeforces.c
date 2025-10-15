#include<stdio.h>
int main()
{
int k,n,w,borrowed,i,total=0;
scanf("%d%d%d",&k,&n,&w);
for(i=1;i<=w;i++){
total = total + k*i;
}
if(total<=n)
borrowed = 0;
else
borrowed = total - n;
printf("%d\n",borrowed);
return 0;
}
