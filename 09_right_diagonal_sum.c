#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i][n - 1 - i];
    }
    printf("Right diagonal sum = %d", sum);
    return 0;
}