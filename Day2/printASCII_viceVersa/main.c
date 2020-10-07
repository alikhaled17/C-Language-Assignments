#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Insert Char To convert It To ASCII: ");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d \n", c, c);

    int x;
    printf("Insert ASCII Num To convert It To Char: ");
    scanf("%d", &x);
    printf("The Char of ASCII %d is %c", x, x);

    return 0;
}
