#include <stdio.h>
int main() {
    int a = 10;
    int *p;
    p = &a;

    printf("Address of a: %p\n", &a); // using &
    printf("Address stored in p: %p\n", p);
    printf("Value of a using *p: %d\n", *p); // using *
    return 0;
}

