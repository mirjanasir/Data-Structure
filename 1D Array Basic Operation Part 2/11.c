#include<stdio.h>

void  main()
{
  int i,arr[100], n = 100;

    for(i = 0; i < 100; ++i )
    {
        arr[i] = i + 1;
        if(i > 9)
            arr[i] = 0;
    }

    int index;
    printf("Enter the index to remove the elements after it: ");
    scanf("%d",&index);



    for(i = index + 1; i < n-1; i++)
    {
        arr[i] = 0;
    }



    for(i = 0; i <= 99; ++i )
    {
        printf("index:[%d] - value:[%d]\n", i, arr[i]);
    }
}

