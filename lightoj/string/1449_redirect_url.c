#include <stdio.h>

int main(void)
{
    int t, i, j;
    char str[100];

    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%s", str);
        printf("Case %d: ", i);
        for (j = 0; str[j]; j++)
        {
            if (j == 4 && str[j] != 's')
            {
                printf("s");
            }
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 29, 2021 | 07:15:11 PM
// Problem Link: https://lightoj.com/problem/redirect-url
