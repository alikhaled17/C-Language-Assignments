#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    // 6- Give an example for bitwise ~ Operator and explain the why of the output
    /*
        based on size in database and format based on what:
            x = value
            ("%d", ~x) = ("&d", Signed_INT_MIN + ( Signed_INT_MAX  - x))  >>>>  -x-1

            # Note: must be format specefier = "%d" becouse it based on signed range
    */

    //signed (-2147483648   >	2147483647)

    char x = 8;

    printf("-2147483648 + (2147483647 - 5) \n>>> ");
    printf("%d \n", -2147483648 + (2147483647 - 8));

    printf("INT_MIN + (INT_MAX - x) \n>>> ");
    printf("%d \n", INT_MIN + (INT_MAX - x));

    printf("INT_MIN + (INT_MAX - x)) \n>>> ");
    printf("%d \n", ~x);


    return 0;
}

