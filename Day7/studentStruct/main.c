#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[30];
    int grades[2];
};

int main() {
    struct student *ptr;
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Memory allocation for noOfRecords structures
    ptr = (struct student *)malloc(n* sizeof(struct student));

    for (i = 0; i < n; ++i) {

        printf("Enter the info of student: \n");
        printf("\nid: ");
        scanf("%d", &(ptr + i)->id);
        printf("name: ");
        scanf("%s", &(ptr + i)->name);
        for(int j = 0; j < 2; j++)
        {
            printf("#G-%d: ", j+1);
            scanf("%d", &((ptr+i) + 2)->grades[j]);
        }
    }

    printf("\nDisplaying Information: \n");
    for (i = 0; i < n; i++)
    {
        int total = 0;

        printf("\n-%d %s \n", i+1,(ptr + i)->name);

        for(int j = 0; j < 2; j++)
        {
           total = total + *( &((ptr + i) + 2)->grades[j] ) ;
        }
        printf("Total Grades = %d ", total);

    }

    free(ptr);
    return 0;
}
