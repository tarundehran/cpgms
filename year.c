#include<stdio.h>
void main()
{
float y,m,w;
int d;
printf("enter the number of days \n");
scanf("%d", &d);
y=d/365;
m=d/30;
w=d/7;
printf("years=%2f", y);
printf("months=%2f", m);
printf("weeks=%2f", w);
}
