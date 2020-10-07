#include <stdio.h>
#include <stdlib.h>

#define maxval(a,b) ((a>b)?a:b)
#define minval(a,b) ((a<b)?a:b)

int main()
{
    // n as number

    printf("Enter 5 numbers to calc max and min of numbers: \n");

    int n1, n2, n3, n4, n5;
    scanf("%d", &n1);
    scanf("%d", &n2);

    int max_n = maxval(n1,n2), min_n  = minval(n1,n2);

    scanf("%d", &n3);
    max_n = maxval(n3,max_n);
    min_n = minval(n3,min_n );

    scanf("%d", &n4);
    max_n = maxval(n4,max_n);
    min_n = minval(n4, min_n);

    scanf("%d", &n5);
    max_n = maxval(n5,max_n);
    min_n = minval(n5, min_n);

    printf("max Value of numbers: %d \n", max_n);
    printf("min Value of numbers: %d", min_n);
    return 0;
}
