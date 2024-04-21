#include <stdio.h>
int hello(char *str)
{
    printf("%s", str);

    return 0;
}

int main()
{
    int x;
    x = hello("Hello World");
    return 0;
}
