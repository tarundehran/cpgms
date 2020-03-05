#include<stdio.h>
void main()
{
float eng,phy,chem,math,es;
float average,total;
printf("enter the marks of 5 subjects \n");
scanf("%f%f%f%f%f", &eng,&phy,&chem,&math,&es);
total=eng+phy+chem+math+es;
average=(total/5.0);
printf("the sum of all subjects=%2f \n", total);
printf("average of the subjects=%2f", average);
}
