#include <stdio.h>

int main()
{
    if (sizeof(int) > -1)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

//
//  irrespective OS size of int is 4 bit
//  here in this case size of returening unsigned value
//  where else -1 is a signed value
//  for this binary comparition this condition returns false
//  
