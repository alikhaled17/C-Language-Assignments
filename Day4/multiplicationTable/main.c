#include <stdio.h>


int main() {
    int x, i;

    printf("**************  Multiplication Table  *******************\n");
    printf("---------------------------------------------------------\n\n");
    printf("Enter an integer: ");
    scanf("%d", &x);

    // if you want start form ( x * 1 to 12 ) : Uncomment next line and delete the line after next line:
    // for (i = 1; i <= 12; ++i) {
    for (i = x; i <= 12; ++i) {
        printf("%d * %d = %d \n", x, i, x * i);
    }
    return 0;
}
