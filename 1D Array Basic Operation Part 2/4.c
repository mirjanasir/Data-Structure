#include<stdio.h>
void main()
{
    int arr[100];
    int i;
    int value, temp, temp2, index;

    for(i = 0; i < 10; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    printf("Enter index to place new value: ");
    scanf("%d", &index);
    printf("Enter a value to place at index %d: ", index);
    scanf("%d", &value);


    temp = arr[3];
    for(i = 0; i <= 99; ++i )
    {
        if(i == index)
            arr[i] = value;

        if(i > index)
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
