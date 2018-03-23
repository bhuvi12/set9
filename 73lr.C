#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
printf("\n enter the number");
scanf("%d",&x);
printf("\n enter the left and right num behind that num:");
scanf("%d%d",&y,&z);
if(x>y&&x<z)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
