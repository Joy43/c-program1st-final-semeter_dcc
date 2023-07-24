#include<stdio.h>
int main()
{
    int i,n;
    int lg,arr[10];
    printf("Enter the number of element (1 to 100):");
    scanf("%d",&n);
    printf("\n");

    for ( i = 0; i < n; ++i)
    {
        /* code */

        if(arr[i]>lg)
        lg=arr[i];
    }
    printf("Largest element =%d",lg);

}