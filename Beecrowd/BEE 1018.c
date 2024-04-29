#include <stdio.h>

int main()
{
    int input,money, hun, fifty, twenty, ten, five, two, one;

    scanf("%d", &input);
    money= input;
    hun = input / 100;
    input = input - (hun * 100);

    fifty = input / 50;
    input = input - (fifty * 50);

    twenty = input / 20;
    input = input - (twenty * 20);

    ten = input / 10;
    input = input - (ten * 10);

    five = input / 5;
    input = input - (five * 5);

    two = input / 2;
    one = input - (two * 2);

    printf("%d\n",money);

    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", hun, fifty, twenty, ten, five, two, one);

    return 0;
}