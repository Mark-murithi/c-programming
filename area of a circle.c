//program to find area of a circle
#include<stdio.h>
#define pi 3.142
int main ()
{
float radius,area;
printf("\n enter thr radius:");
scanf("%f",&radius);
area=pi*radius*radius;
printf("\n the area is %f",area);
return 0;
}