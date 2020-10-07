#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int loop;
    scanf("%d", &x);
    loop = 0;
    if (x)
        while(loop != x)
        {
            int i = 0;
            while(i<x)
            {
                ((x-i) != 1)? printf("*  "):printf("* ");
                i++;
            }
            printf("\n");
            loop++;
        }

    return 0;
}
