#include <stdio.h>

int main()
{
    int numbers[10] = {5, 9, 17, 11, 16, 28, 34, 43, 49, 57};
    int foundIndex = -1;
    int target;

    printf("Enter an integer to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == target)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        printf("%d was found at index %d\n", target, foundIndex);
    }
    else
    {
        printf("%d was not found.\n", target);
    }
    return 0;
}
