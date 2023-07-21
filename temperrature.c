#include<stdio.h>
int main()
{
  float fah,cel;
  printf("enter the tempetrature in fahhenheit:");
  scanf("%f",&fah);
//   (32°F − 32) × 5/9

cel=(fah-32/1.8);
printf("temparature is celsius:%.2f \n",cel);
return 0;

}