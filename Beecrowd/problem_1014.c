#include<stdio.h>

int main() {
    int X;
    float Y;
    double consumption ;
    scanf("%d %f",&X,&Y);
    consumption = X/Y ;
    printf("%.3lf km/l\n",consumption);
     return 0 ;
}