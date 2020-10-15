/* Example using strcat by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

int main()
{
    char fName[50], lName[50];


    printf("\n-------------------------------------------\n");
    printf("---------------- By Strcat -----------------\n");

    printf("First Name: ");
    gets(fName);
    printf("Last Name: ");
    gets(lName);
    strcat(fName, lName);
    printf("\nYour Full Name Is: %s \n", fName);

    printf("\n-------------------------------------------\n");
    printf("----------------- Manual ------------------\n");

    int length, j;
    length = 0;
    while (fName[length] != '\0') {
    length++;
    }
    for (j = 0; lName[j-1] != '\0'; ++j) {
    fName[length] = lName[j];
    }
    printf("\nYour Full Name Is: %s ", fName);

    return 0;
}
