#include <stdio.h>
#include <string.h>

char function(char *s)
{
    int index = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (index > 0 && s[i] == s[index - 1]) // Stack is not empty
            index--;
        else
            s[index++] = s[i];
    s[index] = '\0';
}

int main()
{
    char s1[10];
    printf("Enter String: ");
    gets(s1);

    function(s1);

    printf("Output 1: %s\n", s1);
    return 0;
}