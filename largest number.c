#include<stdio.h>
int main()

{
    double n1,n2,n3;
    printf("Enter the three number:-");
scanf("%lf %lf %lf",&n1,&n2,&n3);
if(n1>n2 && n1>n3 )
{
    printf("%.2f is a longest number",n1);
}
else if (n2>n1 && n2>n3)
{
printf("%.2f is a longest number",n2);
}
else if(n3>n1 && n3>n2) {
    printf("%.2f is a longest number",n3);
}
return 0;
}


