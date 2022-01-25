#include <stdio.h>

int main(void) {
typedef int integer;

integer main_int = 0;
printf("\n A char           is %d bytes", sizeof(char));
printf("\n An int           is %d bytes", sizeof(int));
printf("\n A long           is %d bytes", sizeof(long))   ; 
printf("\n A long long      is %d bytes", sizeof(long long));
printf("\n A short          is %d bytes", sizeof(short));
printf("\n An unsigned char is %d bytes", sizeof(unsigned char));
printf("\n An unsigned int  is %d bytes", sizeof(unsigned int));
printf("\n A unsigned long  is %d bytes", sizeof(unsigned long));
printf("\n A unsigned long long            is %d bytes", sizeof(unsigned long long));
printf("\n A float            is %d bytes", sizeof(float));
printf("\n A double            is %d bytes", sizeof(double));
}