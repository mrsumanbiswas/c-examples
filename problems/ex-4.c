#include <stdio.h>

int main()
{
    char *p = 0;
    *p = 'A';
    printf("The Value at p=%c\n", *p);
    return 0;
}