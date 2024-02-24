#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX;  // Maximum representable value for a signed int

    // Attempt to overflow by adding 1
    x = x + 1;
    printf("Int max value: %d\n", INT_MAX);
    printf("Result after overflow: %d\n", x);

    return 0;
}