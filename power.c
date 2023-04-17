#include <stdio.h>

int main()
{
    char a[6] = "Srayo\0";
    int sz = sizeof(a) / sizeof(char);
    printf("%s %d", a, sz);
    return 0;
}