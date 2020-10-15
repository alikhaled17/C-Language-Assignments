#include <stdio.h>
int main() {
    int c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ( c <= 127)
        printf("%c is an Normal", c);
    else
        printf("%c is Extended", c);

    return 0;
}
