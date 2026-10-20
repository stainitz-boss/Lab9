#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 9
#define COL 9


void main()
{
    int row, col;
    printf("\n");

    for (row = 1; row <= ROW; row++)
    {
        for (col = 1; col <= row; col++)
            printf("%5d ", row*col);
            printf("\n");
    }
    system("pause");
    
    int count = 11;
    for (row = 1; row <= count; row++)
    {
       for (col = 1; col <= row; col++)
       {
            printf("%2d ", row);
        }
        printf("\n");
    }

    return 0;
}
