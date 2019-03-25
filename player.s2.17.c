#include <stdio.h>
int main()
{
int a,b,i,num, k;
scanf("%d %d",&a,&b);
for(i=1; i <= a && i <= b; ++i)
{
if(a%i==0 && b%i==0)
num = i;
}
k = (a*b)/num;
printf("%d",num);
return 0;
}
