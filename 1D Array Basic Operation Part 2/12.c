#include<stdio.h>
void main()
{
    int arr[100];
    int i,j, value, index = -1;

    for(i = 0; i < 100; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    printf("Enter the value to remove from the array: ");
    scanf("%d", &value);


    for(i = 0; i <= 99; ++i )
    {
        if(arr[i] == value)
        {
            index = i;
            for(j = index; j < 99; j++)
            {
                arr[j] = arr[j+1];
            }
            arr[99] = 0;
            break;
        }
    }
    if(index == -1)
        printf("\nElement not found\n");

    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}


