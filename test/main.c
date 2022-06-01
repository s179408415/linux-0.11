#include <stdio.h>
int main() {
    int i=5;
    __asm__ (
        "leal (%0, %0, 4), %0"
        : "=r"(i)
        : "0"(i)
    );
    printf("Hello, %d\n", i);
    return 0;
}