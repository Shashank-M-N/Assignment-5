#include <stdio.h>

int main()
{
    int i, s = 0;
    char ch;
    while (1)
    {
        printf("Provide the number: ");
        scanf("%d", &i);
        if (i % 2 == 0)
            s += i;
    s:
        printf("Do you want to continue?\n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'Y' || ch == 'y')
            continue;
        else if (ch == 'N' || ch == 'n')
        {
            printf("The sum is: %d", s);
            break;
        }
        else
        {
            printf("Invalid input.\n");
            goto s;
        }
    }
    return 0;
}