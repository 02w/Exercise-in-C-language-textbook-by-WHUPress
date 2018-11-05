#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a = 0152, b = 0xbb; //a = 106(10) = 1101010(2)     b = 187(10) = 10111011(2)
    printf("%x\n", a | b);           //or
    printf("%x\n", a & b);           //and
    printf("%x\n", a ^ b);           //xor
    printf("%x\n", ~a + ~b);
    printf("%x\n", a <<= b);         //a <<= (b % 32)
    printf("%x\n", a >> 2);          //a was updated in the last line
    system("pause");
    return 0;
}
