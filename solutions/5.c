#include <stdio.h>

int main()
{
    int a = 1, b = 3, c = 2;
    if (a > b)
        if (b > c)
            printf("a > b and b > c\n");
        else // this is a kind of indentation problem; this else belong the (b>c) condition's if not the (a>b); therefore its not printing the same;
            printf("something else\n");
}