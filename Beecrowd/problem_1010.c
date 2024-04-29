#include<stdio.h>

int main() {
    int p1_code ,p1_unit, p2_code,p2_unit ;
    float p1_price,p2_price ;
    double payment;
    scanf("%d %d %f", &p1_code, &p1_unit, &p1_price);
    scanf("%d %d %f", &p2_code, &p2_unit, &p2_price);

    payment= (p1_price*p1_unit) + (p2_unit*p2_price);

    printf("VALOR A PAGAR: R$ %.2lf\n", payment);
     return 0 ;
}