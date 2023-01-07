#include <stdio.h>

#define true 1
#define false 0

int is_prime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;

    return num % 2 != 0;
}

int is_odd(int num) {
    int isodd = is_prime(num);
    if (isodd == false) isodd++;
    else isodd--;

    return isodd;
}

int factorial(int num)
{
    int tmp = 1;

    for (int i = num; i > 1; i--)
    {
        tmp *= i;
    }

    return tmp;
}

char* __strbool(int bool)
{
    if (bool == true) return "Yes";
    else return "No";
}

int main()
{
    int input = 5;
    printf("%d is prime? %s\n", input, __strbool(is_prime(input)));
    printf("%d is odd? %s\n", input, __strbool(is_odd(input)));
    printf("factorial(%d) is %d", input, factorial(input));

    return false;
}