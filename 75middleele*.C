#include<stdio.h>
#include<conio.h>
void main()
{
int i,l;
char a[6]="hello";
l=strlen(a);
if(l%2==0)
{
a[1/2]='*';
}
else
{
a[1-1/2]='*';
}
for(i=0;a[i]!='\0';i++)
{
printf("\n the middle element is:%c",a[i]);
}
}
