#include <stdio.h>

int main()
{
    char *p = 0; // *p is a null pointer location
    *p = 'A';    // here the code will throw an error because of anauthorised access to the memory address as we are trying to assign a value to this point
    printf("The Value at p=%c\n", *p);
    return 0;
}