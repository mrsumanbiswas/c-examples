#include <stdio.h>

int main()
{
    int a, b = 1, c = 1;
    a = sizeof(c = ++b + 1); // size of is a compile method/function which don't play during runtime for this only `a` got its value from it.
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
