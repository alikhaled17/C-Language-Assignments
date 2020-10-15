#include <stdio.h>

void selectChar(char str[])
{

    int count = 0;
    for(int j = 0; str[j] != '\0'; j++)
    {
        for (int i = 0; str[i] != '\0'; ++i)
        {
            if (str[j] == str[i])
                count++;
        }
        printf("%c = %d \n", str[j], count);
        count = 0;
    }
}

int main() {

    char str[1000], ch;


    printf("Enter a string: ");
    scanf("%s", &str);

    selectChar(str);





    return 0;
}
