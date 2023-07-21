
#include <stdio.h>

int fact(int n);

int main() {
    int n;
    printf("Enter the integer value: ");
    scanf("%d", &n);
    printf("Result = %d", fact(n));
    return 0;
}

int fact(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}


// #include<stdio.h>
// int fact (int);
//  main()
// {
//     int n;
//     printf("Enter the integer value");
//     scanf("%d",&n);
//     printf("Result=%d",fact(n));
// }
//  int fact(int n);
// {
   
//    int i,f=1;
//    for ( i = 0; i <=n; i++)
//    {
//     /* code */
//     f=f*i;
//     return f;
//    }
    
// }