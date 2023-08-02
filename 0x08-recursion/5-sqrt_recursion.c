#include "main.h"
#include <math.h>

int actual_sqrt_recursion(int n, int i);

int sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return actual_sqrt_recursion(n, 0);
}

int actual_sqrt_recursion(int n, int i)
{
    if ((i * i) > n)
    {
        if (((i - 1) * (i - 1)) == n)
            return (i - 1);
        return (-1);
    }
    return actual_sqrt_recursion(n, i + 1);
}
