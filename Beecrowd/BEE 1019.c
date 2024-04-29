#include <stdio.h>

int main()
{
    int input, h, m, s;
    scanf("%d", &input);
    h = input / 3600;
    input = input - (h * 3600);
    m = input / 60;
    s = input - (m * 60);

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}