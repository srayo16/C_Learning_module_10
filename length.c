#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int count = 0;
    int k = 0;
    while (a[k] != '\0')
    {
        count++;

        k++;
    }

    // for (int i = 0; i < 100; i++)
    // {
    //     if (a[i] != '\0')
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    printf("%s", a);
    printf("\nWord Count: %d", count);

    return 0;
}