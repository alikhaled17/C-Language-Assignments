#include <stdio.h>

// This way From internet Search.

/*
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
         printf("%c is an alphabet.", c);
    else
         printf("%c is not an alphabet.", c);

    return 0;
}
*/

// This way by me Depending on ASCII value.
// I get ASCII values for Alphabet from https://www.kerryr.net/pioneers/ascii2.htm

int main() {
    int c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ( ((c >=65 )&& (c <= 90)) || (( c >= 97 )&& (c <= 122)))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
