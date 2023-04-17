// Given a string S. Print the summation of its digits.
#include <stdio.h>
#include <string.h>

int main()
{

    char s[1000000];
    // gets(s);
    scanf("%s", s);

    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // sum += (s[i] - '0');
        sum = sum + (s[i] - '0');
        // sum = sum + (s[i] - '0');
        /* code */
    }
    printf("%d", sum);

    return 0;
}