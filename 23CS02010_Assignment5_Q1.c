#include <stdio.h>

int main()
{
    int n, a[10], s = 0, i = 0, t, c;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n)
    {
        a[i++] = n % 10;
        n /= 10;
    }
    printf("Number of digits: %d", i);
    for (int j = 0; j < i; j++)
    {
        t = a[j];
        c = 0;
        for (int k = j - 1; k >= 0; k--)
            if (t == a[k])
            {
                c = 1;
                break;
            }
        if (!c)
            s += a[j];
    }
    printf("\nSum of unique digits: %d", s);
    return 0;
}