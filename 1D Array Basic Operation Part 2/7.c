#include<stdio.h>
void main()
{
    int arr[100];
    int i, value;

    for(i = 0; i < 100; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    printf("Enter the to search in the array: ");
    scanf("%d", &value);

    int found = 0;
    for(i = 0; i <= 99; ++i )
    {
        if(arr[i] == value)
        {
            printf("\nFound\n");
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("\nNot Found\n");
}
