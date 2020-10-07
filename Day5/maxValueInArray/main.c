
#include <stdio.h>

int main()
{
  int array[5], *max, size = 5, i;


  printf("Enter %d nums\n", size);

  for ( i = 0 ; i < size ; i++ )
    scanf("%d", &array[i]);

  *max= *array;

  for (i = 1; i < size; i++)
  {
    if (*(array+i) > *max)
    {
       *max = *(array+i);
    }
  }

  printf("Maximum element is %d.\n",*max);
  return 0;
}


