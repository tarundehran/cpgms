#include<stdio.h>
void main()
{
float basic,da,ha,gross;
printf("enter the basic salary of the employ");
scanf("%f", &basic);
ha=0.2*basic;
printf("ha=%f", ha);
da=0.4*basic;
printf("da=%f", da);
gross=basic+da+ha;
printf("gross=%f", gross);
}
