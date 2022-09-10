# Example 3

```c
#include <stdio.h>

int main()
{
    int a, b = 1, c = 1;
    a = sizeof(c = ++b + 1);
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
```

> ### What will be the value of a, b & c ?
> ###  And why ?