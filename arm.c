#include<stdio.h>
void main()
{
int n,m,r,s=0;
printf("enter the value\n");
scanf("%d",&n);
m=n;
while(m!=0)
{
r=m%10;
s=s+r*r*r;
m=m/10;
}
if(s==n)
printf("armstrong no");
else
printf("not an armstrong no");
}
