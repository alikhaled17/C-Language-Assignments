
#include <stdio.h>
#include <string.h>

int main()
{
    int x = 0;
    char x1[4], x2[4];

    printf("\nEnter x1: ");
    scanf("%s", &x1);
    printf("\nEnter x2: ");
    scanf("%s", &x2);

    printf("\n-------------------------------------------\n");
    printf("------------------ manual ------------------\n");

    for (int i = 0; i < 4; i++)
    {
      if(x1[i] != x2[i])
        x++;
    }

    if(x == 0)
        printf("is copied!");
    else
        printf("Not copied!");

    printf("\n-------------------------------------------\n");
    printf("---------------- By Strcmp -----------------\n");

    x =0;
    if(strcmp(x1, x2) == 0)
        x++;

    if(x != 0)
        printf("is copied!");
    else
        printf("Not copied!");

    printf("\n");
    return 0;
}


