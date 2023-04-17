#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);

    int count = strlen(a);

    printf("%s", a);
    printf("\nWord Count: %d", count);

    return 0;
}