#include <stdio.h>
#include <stdlib.h>


int main()
{

    char x;

    printf("Insert Your Grade: ");
    scanf("%c", &x);


    switch(x)
    {
        case 'A':
        case 'a':
            printf("Excellent");
            break;
        case 'B':
        case 'b':
            printf("Very Good");
            break;
        case 'C':
        case 'c':
            printf("Good");
            break;
        case 'D':
        case 'd':
            printf("Fair");
            break;
        case 'E':
        case 'e':
            printf("Failed");
            break;
        default:
            printf("'%c' Not A Grade", x);
            break;
    }

    return 0;
}
