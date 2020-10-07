#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("********* Simple Minue *********\n");
    printf("--------------------------------\n\n");
    printf("1-Add \n2-upload \n3-Download \n4-Show \n5-Sittings \n00-Exit \n \n");
    printf("Enter number to choose it from minu or enter (00) to exit >> ");
    scanf("%d", &x);
    void cheack(X)
    {
        if(x==1)
            printf("1-Add \n");
        else if(x==2)
            printf("2-upload \n");
        else if(x==3)
            printf("3-Download \n");
        else if(x==4)
            printf("4-Show \n");
        else if(x==5)
            printf("5-Sittings \n");
        else if(x==5)
            printf("5-Sittings \n");
        else
            printf("Not Found !\n");
    }
    while(x != 00)
    {
        cheack(x);
        printf("Enter another number to choose it from minu or enter (00) to exit >> ");
        scanf("%d", &x);
    }
    printf("\n*******************\n* Nice To See You *\n*******************\n");
    return 0;
}
