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
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    else
    {
        for (int i = 0; i < row; i++)
        {

            for (int u = 0; u < col; u++)
            {
                if (i == u)
                {
                    continue;
                }

                if (array[i][u] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag)
    {
        printf("Primary Diagonal matrix");
    }
    else
    {
        printf("Not Diagonal matrix");
    }

    return 0;
}
/*
input
3 3
1 0 0
0 2 0
0 0 3

*/