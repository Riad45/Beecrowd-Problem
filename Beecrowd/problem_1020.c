#include <stdio.h>

int main()
{
    int age, years, months, days;
    scanf("%d", &age);
    years = age / 365;
    days = age % 365;
    months = days / 30;
    days = days % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}