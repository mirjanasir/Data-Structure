#include<stdio.h>
void main()
{
    int arr[100];
    int i, value, index = -1;

    for(i = 0; i < 100; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    printf("Enter the to search in the array: ");
    scanf("%d", &value);


    for(i = 0; i <= 99; ++i )
    {
        if(arr[i] == value)
        {
            printf("\n[%d]\n", i);
            index = i;
            break;
        }
    }
    if(index == -1)
        printf("\n[%d]\n", index);
}

