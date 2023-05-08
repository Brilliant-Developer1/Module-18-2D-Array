#include <stdio.h>
int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int array[row][col];
    int element = row * col;

    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {
            scanf("%d", &array[i][u]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {
            if (array[i][u] == 0)
            {
                count++;
            }
        }
    }
    if (element == count)
    {
        printf("Zero matrix");
    }
    else
    {
        printf("Not Zero matrix");
    }

    return 0;
}
/*
input
5 3
0 0 0
0 0 0
0 0 0
0 0 0
0 0 0

*/