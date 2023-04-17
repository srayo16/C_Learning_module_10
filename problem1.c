// Given two strings S and T. Print 2 lines that contain the following in the same order:

// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    int count = strlen(s);
    int count2 = strlen(t);
    printf("%d %d\n%s %s", count, count2, s, t);
    return 0;
}