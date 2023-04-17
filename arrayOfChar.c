#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array number: ");
    scanf("%d", &n);
    char arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", arr[i]);
    }

    return 0;
}