#include<stdio.h>
void main()
{
    int arr[100];
    int i;

    for(i = 0; i < 10; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    arr[10] = 101;

    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}

/*
#include<stdio.h>
void main()
{
    int arr[100];
    int i;

    for(i = 0; i < 10; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }


    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}
*/
