#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

int top = -1;
char stack[SIZE];

void push(char data)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = data;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return '\0';
    }
    char data = stack[top--];
    return data;
}

void reverse(char *str)
{
    for (int i = 0; i < strlen(str); i++)
        push(str[i]);
    for (int i = 0; i < strlen(str); i++)
        str[i] = pop();
}

int main()
{
    char str[10];
    printf("Enter String: ");
    gets(str);
    reverse(str);
    printf("Reversed string is: %s\n", str);
}