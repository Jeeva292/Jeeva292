#include <stdio.h>
#include <math.h>

double factorial_stirling(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1; 
    }
    return sqrt(2 * M_PI * n) * pow(n / M_E, n);
}

int main() 
{
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else 
    {
        printf("Approximate factorial of %d is: %.0f\n", n, factorial_stirling(n));
    }

    return 0;
}


