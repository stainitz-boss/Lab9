#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++) 
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}
