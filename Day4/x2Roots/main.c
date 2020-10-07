#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b, c;
    float x1, x2;

    printf("**************  Find 2roots for X from this equation  *******************\n");
    printf("***********************   (ax^2 + bx + c = 0)   *************************\n\n");
    printf("insert a: ");
    scanf("%d", &a);
    printf("insert b: ");
    scanf("%d", &b);
    printf("insert c: ");
    scanf("%d", &c);

    printf("\n\nAnswer:\n");
    x1 = ( -(b) + (sqrt(pow(b, 2) - (4*a*c))) )/(2*a);
    x2 = ( -(b) - (sqrt(pow(b, 2) - (4*a*c))) )/(2*a);

    printf("x1 =  %.1f \n", x1 );
    printf("x2 =  %.1f \n", x2);

    return 0;
}
