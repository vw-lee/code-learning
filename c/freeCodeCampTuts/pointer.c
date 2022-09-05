/* Pointer and memory address */
// A pointer is a memory address.
#include <stdio.h>

int main() {
    int age = 30;
    int *pAge = &age;
    // `%p` to print a memory address, note the `&age` usage.
    printf("age's memory address: %p\n", &age);
    printf("another way to print a pointer address: %p\n", pAge);
    // De-reference will grab the value of the pointed address, can also use `*&age`
    printf("De-referencing pointer: %d\n", *pAge);
    return 0;
}