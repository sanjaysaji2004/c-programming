#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main()
{
    char str[100];
    printf("Enter a string to reverse: ");
    scanf("%s", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

void reverse(char *str)
{
    char *start, *end;
    char temp;
    start = str;
    end = str + strlen(str) - 1;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

