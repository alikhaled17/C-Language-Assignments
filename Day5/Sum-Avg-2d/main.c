#include <stdio.h>

int main()
{
    int Arr[2][2], i, j;
    float sum = 0;

    for (i = 0; i < 2; i++)
    {
        for(j =0; j < 2; j++)
        {
            printf("Enter element %d-%d : ", i+1, j+1);
            scanf("%d", &Arr[i][j]);
            sum += Arr[i][j];
        }
    }
    printf("\nsum of the array is : %.0f", sum);
    printf("\naverage of the array is : %0.2f", sum / 4);
    return 0;
}
