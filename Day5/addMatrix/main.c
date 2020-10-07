#include <stdio.h>



int main() {
    int sum[2][2], i, j;

    int a[2][2] = {{1, 2},{1, 2}};
    int b[2][2] = {{6, 5},{2, 3}};
    printf("a = {{1, 2},{1, 2}} \n");
    printf("a = {{6, 5},{2, 3}} \n");


    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("\nSum of two matrix: \n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == 1) {
                printf("\n\n");
            }
        }

    return 0;
}

