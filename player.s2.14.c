#include <stdio.h>
#include<string.h>
int main()
{
char a[10];
int j,s;
scanf("%s",a);
s=strlen(a);
for(j=s-1;j>=0;j--)
{
if(a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U'||a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')          
{
continue;
}
else
{
printf("%c",a[j]);
}}
return 0;
}
