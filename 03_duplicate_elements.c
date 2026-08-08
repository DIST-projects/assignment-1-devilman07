#include <stdio.h>
int main()
{
    int a[100], n, i, j, duplicate = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                duplicate++;
            }
        }
    }
    printf("Total number of duplicate elements = %d", duplicate);
    return 0;
}