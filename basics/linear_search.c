#include <stdio.h>
int main()
{
    int numbers[] = {20, 5, 34, 9, 23};
    int target;
    int found = 0;
    int size = 5;

    printf("Enter the element to search:");
    scanf("%d", &target);

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)

        {
            printf("Element found at position:%d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element not found in the array\n");
    }
    return 0;
}