#include <stdio.h>

int main(void) {
    int small_number = 200;
    double medium_number = 123456789.123456789;
    long large_number = 1L * 1024L * 1024L * 1024L;
    // casting using `(double)`
    printf("%d, %f, %ld, %e\n", small_number, medium_number, large_number, (double)small_number/large_number);

}