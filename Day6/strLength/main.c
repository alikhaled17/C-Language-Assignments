#include <stdio.h>



int main() {

    char str[10], count = 0;

    printf("Enter a string: ");
    gets(&str);
    for (int i = 0; str[i] != '\0'; ++i)
        count++;

    printf("Length of the string by 'Loop' = %d\n", count);

    count = strlen(str);
    printf("Length of the string by 'strlen()' = %d\n", count);





    return 0;
}
