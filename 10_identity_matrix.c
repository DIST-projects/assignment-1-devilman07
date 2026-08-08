#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, identity = 1;
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
        for (j = 0; j < n; j++)
        {
            if (i == j && a[i][j] != 1)
                identity = 0;

            if (i != j && a[i][j] != 0)
                identity = 0;
        }
    }
    if (identity)
        printf("It is an identity matrix.");
    else
        printf("It is not an identity matrix.");
    return 0;
}