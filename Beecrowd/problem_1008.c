#include<stdio.h>

int main() {
    int number , work_per_hour ;
    float payment ;
    double salary ;

    scanf("%d %d %f", &number, &work_per_hour, &payment);
    salary = work_per_hour * payment ;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf", salary);
     return 0 ;
}