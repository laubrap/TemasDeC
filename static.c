#include <stdio.h>

int suma (int num)
{
    static int sum=0;
    sum+=num;
    return sum;
}

int main(void)
{
    printf("%d\n",suma(55));
    printf("%d\n",suma(45));
    printf("%d\n",suma(123));
    return 0;
}