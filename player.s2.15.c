#include<stdio.h>
#include<string.h>
int main()
{
char a[100],r;
int i,j,k,num=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
k=0;
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
k++;
}
}
if(k>num)
{
r=a[i];
k=num;
}}
printf("%c",r);
return 0;
}
