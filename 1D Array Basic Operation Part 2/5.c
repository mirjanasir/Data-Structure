#include<stdio.h>
void main()
{
    int arr[100];
    int i, value, index = 5;

    for(i = 0; i < 10; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    printf("Enter a value to place at index 5: ");
    scanf("%d", &value);

    arr[index] = value;

    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}
