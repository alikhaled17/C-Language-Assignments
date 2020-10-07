#include <stdio.h>
#include <string.h>

// this code from internet but I've added some lines to calc Number of chars in sentence.

int main()
{
    char s[200];
    int count1=0, count2=0, i;

    printf("Enter the sentence:\n");
    scanf("%[^\n]s", s);

    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count1++;
        if (s[i] != ' ')
            count2++;
    }

    printf("Number of words in given sentence are: %d\n", count1 + 1);
    printf("Number of chars in given sentence are: %d\n", count2 );
    return 0;
}
