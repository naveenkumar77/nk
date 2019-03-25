#include<stdio.h>
int main()
{
 int num,sum=0,i,k;
 scanf("%d",&num);
 while(num!=0)
 {
   k=num%10;
   i=k*k;
   sum=sum+i;
   num=num/10;
 }
 printf("\n%d",sum);
 return 0;
 } 
