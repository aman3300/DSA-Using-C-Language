#include <stdio.h>
void finder(int x, int arr[], int *found);
int main()
{
    int arr[10];
    int i, x, found = 0;

    // getting the input
    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d", &x);

    finder(x, arr, &found);
    return 0;
}
void finder(int x, int arr[], int *found)
{
    // search begins here.
    int i;
    for (i = 0; i < 10; i++)
    {
        if (x == arr[i])
        {
            *found = 1;
            break;
        }
    }
    // printing the position of the element.
    if (*found == 1)
    {
        printf("Element is present in the array at %d position\n", i + 1);
    }
    else
    {
        printf("Element is not present in the array\n");
    }
}