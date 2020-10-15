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

    printf("Enter a value: ");
    scanf("%d",&value);

    for(i = 0; i < 100; ++i)
    {
        if(arr[i] == 0)
        {
            arr[i] = value;
            break;
        }
    }

    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}

