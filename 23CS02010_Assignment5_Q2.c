#include <stdio.h>

int main()
{
    int n1, n2, q = 0, r;
    printf("Enter the dividend: ");
    scanf("%d", &n1);
    printf("Enter the divisor: ");
    scanf("%d", &n2);
    r = n1;
    while (1)
    {
        q++;
        r -= n2;
        if (r < 0)
            break;
    }
    q--;
    r += n2;
    printf("The quotient is: %d", q);
    printf("\nThe remainder is: %d", r);
}