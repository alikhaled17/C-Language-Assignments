#include <stdio.h>
int main() {
    char c[100];
    printf("Enter a String: ");
    scanf("%s", &c);

    printf("Alphabit String: ");

    for(int i=0; c[i] != '\0' ; ++i)
    {
        if (((c[i] >=65 )&& (c[i] <= 90)) || (( c[i] >= 97 )&& ( c[i] <= 122)))
            printf("%c", c[i]);
    }
    return 0;
}
