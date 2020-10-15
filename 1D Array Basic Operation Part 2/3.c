#include<stdio.h>
void main()
{
    int arr[100];
    int i;
    int value, temp, temp2;

    for(i = 0; i < 10; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    printf("Enter a value to place at index 3: ");
    scanf("%d", &value);


    temp = arr[3];
    for(i = 0; i <= 99; ++i )
    {
        if(i == 3)
            arr[i] = value;

        if(i > 3)
        {
            temp2 = arr[i];
            arr[i] = temp;
            temp = temp2;
        }

    }


    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}
