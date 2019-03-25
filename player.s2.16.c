#include <stdio.h>
int main() 
{
int x[25],y[25],i,j;
printf("enter x:");
scanf("%d",&x);
printf("enter y");
for(i=0;i<x;i++)
{
scanf("%d",&y);
}
for(i=0;i<x;i++)
{
for(j=i+1;j<y;j++)
{
if(x[i]<y[j])
{
printf("%d",x[i]);
}
else
{
printf("%d",y[j]);
}}}
return 0;
}
