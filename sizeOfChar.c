#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sz = sizeof(a) / sizeof(int);

    char arr[n];
    int szArr = sizeof(arr) / sizeof(char);

    printf("nth is: %d %d", sz, szArr);
    return 0;
}