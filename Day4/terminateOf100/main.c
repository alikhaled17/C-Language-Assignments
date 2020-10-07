#include <stdio.h>
int main()
{
    int number = 0;
    int sum = 0;

    while(sum < 100)
    {
        printf("Enter a number: \n");
        scanf("%d", &number);
        sum = sum + number;
    }

    (sum == 100)? printf("Excellent: The total numbers you entered are is equal %d",sum): printf("Oops: The total numbers you entered are greater than 100 By: %d", sum-100);

    return 0;
}

