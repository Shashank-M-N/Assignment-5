#include <stdio.h>

int main()
{
    int a;
    printf("Input: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = a - i; j > 0; j--)
            printf(" ");
        for (int k = a - i; k <= a; k++)
            printf("* ");
        printf("\b\n");
    }
    return 0;
}