#include <stdio.h>
int main()
{
    int arr1[5], freq=0;
    int i, j, k;

   printf("\n\n Print yes if an element is duplicate of an array\n");
   printf("------------------------------------------------------\n");


    for(i=0;i<5;i++)
    {
      printf("element - %d: ",i);
      scanf("%d",&arr1[i]);
    }

    printf("\ncheck .. \n");

    freq=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++){
            if(arr1[i]==arr1[j] && i != j)
                freq++;
        }
    }


    if(freq==0)
    {
        printf("\n>> No Duplicated!");
    } else {
        printf("\n>> Yes Duplicated!");
    }
}
