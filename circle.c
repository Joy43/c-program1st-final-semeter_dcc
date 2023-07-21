#include<stdio.h>
int main()
{
float fh,cel;
printf("Enter the farenhite temperature :");
scanf("%f",&fh);
cel=(fh-32)/1.8;
printf("The tempurature in celsius : %.2f\n",cel);
return 0;
}