#include <stdio.h>
int main()
{
    char str[200];
    int i, words = 0, isWord = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            if (isWord == 0)
            {
                words++;
                isWord = 1;
            }
        }
        else
        {
            isWord = 0;
        }
    }
    printf("Number of words = %d", words);
    return 0;
}