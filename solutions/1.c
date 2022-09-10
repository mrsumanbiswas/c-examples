#include <stdio.h>

int main()
{
    float f = 0.1; // here `f` is a float

    if (f == 0.1) // 0.1 is by defatult a double
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

// conclusion
//
// >> double has more presision than float and this is the only reasion that binary comparision returned false of `f == 0.1`
//
//
