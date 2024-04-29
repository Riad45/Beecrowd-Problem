#include <stdio.h>

int main()
{
    int n, i, a;
    scanf("%d", &n);

    for (a = 0; a <= n; a++)
    {

        scanf("%d", &i);

        if (i == 0)
        {
            printf("NULL\n");
        }
        else if (i % 2 == 0 && i > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (i % 2 == 0 && i < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (i % 2 == 1 && i > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (i % 2 == 1 && i < 0)
        {
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}