#include <stdio.h>

int main() {
    int x, reverse_Num = 0, mod;
    printf("Insert Your Num: ");

    scanf("%d", &x);

    while (x != 0) {
        mod = x % 10;

        reverse_Num = reverse_Num * 10 + mod;

        x = x / 10;
    }
    printf("Reversed number = %d", reverse_Num);
    return 0;
}
