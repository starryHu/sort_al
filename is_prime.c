#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if(n == 2 || n == 3)
        return 1;
    if(n % 6 != 1 && n % 6 != 5)
        return 0;
    int tmp = sqrt(n);
    int i = 5;
    for(; i <= tmp; i+=6)
        if(n % i == 0 || n % (i+2) == 0)
            return 0;
    return 1;
}

int main(void)
{
    int i = 2;
    for(; i < 10000; i++)
        if(is_prime(i)){
            printf("%d\n", i);
        }

    return 0;
}
