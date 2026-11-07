#include <stdio.h>
#include <string.h>

int main()
{
    char str[130];
    int i;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    // fast letter
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    // others letter
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            str[i + 1] = str[i + 1] - 32;
        }
    }

    printf("Capitalized sentence: %s", str);
}