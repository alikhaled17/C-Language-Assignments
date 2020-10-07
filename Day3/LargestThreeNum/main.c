#include <stdio.h>

int x, store;

int main() {

    printf("print total of numbers when it gets to 100 \n");
    scanf("&d", &x);

    while(store < 100)
    {
        scanf("&d", &x);
        store = store + x ;
    }
    return 0;
}
