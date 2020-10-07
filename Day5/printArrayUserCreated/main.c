#include <stdio.h>

void  main()
{
    int arr[5];
    int i;
       printf("** Input and Print elements of an array **\n");
       printf("-----------------------------------------\n");

    printf("Input 10 elements in the array :\n");
    for(i=0; i<5; i++)
    {
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\n array : {");
    for(i=0; i<5; i++)
    {
        if(i == 4){
            printf("%d", arr[i]);
        }else{
            printf("%d, ", arr[i]);
        }
    }

    printf("}");

}
