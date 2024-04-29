/*#include <stdio.h>

int main()
{
   long long int a, b, sum = 0;
    scanf("%lld %lld", &a, &b);

    for (int i = a; i <= b; i++)
    {

        sum = sum + i;// ########time complexcity****#######
    }

    printf("%lld\n", sum);

    return 0;
}   */




#include<stdio.h>
int main()
{
   long long int a,b,n,s;

    scanf("%lld %lld",&a,&b);

         n=(b-a)+1;
         s=((float)n/2)*(2*a+(n-1));
         printf("%lld\n",s);


    return 0;
}