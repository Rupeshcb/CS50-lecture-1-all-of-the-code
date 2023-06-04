#include <stdio.h>
#include <cs50.h>

// Now take a look at operators at cs50 lecture

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    
    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}