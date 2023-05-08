#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int array[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int u = 0; u < m; u++)
        {
            scanf("%d", &array[i][u]);
        }
    }

    for (int i = 0; i < n; i++)
    {

        for (int u = 0; u < m; u++)
        {
            printf("%d ", array[i][u]);
        }
        printf("\n");
    }

    return 0;
}