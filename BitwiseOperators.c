#include <stdio.h>

int main()
{

    int x = 6;  // 6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0; //10 = 00001010

    z = x & y;
    printf("AND = %d\n" ,z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z); 

    z = x << 2;
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 1;
    printf("SHIFT RIGHT = %d\n", z);

    return 0;
}

// BITWISE OPERATORS = Special operators used in bit level programming
//                     (Knowing binary is important for this topic)

// & = AND
// | = OR
// ^ = XOR
// << LEFT SHIFT
// >> RIGHT SHIFT