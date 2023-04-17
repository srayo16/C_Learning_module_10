// Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

// Hint: use function getline(cin, s).
#include <stdio.h>
#include <string.h>

int main()
{

    //  char s[1000000];
    //     gets(s);
    //     int i = 0;
    //     while (s[i] != '\\')
    //     {
    //         printf("%c", s[i]);
    //         i++;
    //     }

    char s[1000000];
    // scanf("%s", s);
    gets(s);
    char x[1000000];
    int i = 0;
    while (s[i] != '\\')
    {
        x[i] = s[i];
        i++;
        /* code */
    }
    printf("%s", x);

    return 0;
}