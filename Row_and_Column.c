#include <stdio.h>
int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int array[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {
            scanf("%d", &array[i][u]);
        }
    }

    // int e;
    // scanf("%d", &e);
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ", array[e][i]);
    // }

    int e;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", array[i][e - 1]);
    }

    return 0;
}