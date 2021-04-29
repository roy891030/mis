#include <stdio.h>

int main()
{
    int a, b, c;
    while (1)
    {
        printf("\n");
        printf("Enter three positive numbers. Enter 0 to quit\n:");
        scanf("%d %d %d", &a, &b, &c);

        if (a < 0 || b < 0 || c < 0)
        {
            printf("Please enter positive numbers.\n");
        }
        else if (a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b)
        {
            printf("This is a right triangle.\n");
        }
        else if (a == 0 || b == 0 || c == 0)
        {
            printf("Goodbye.\n");
            break;
        }
        else
        {
            printf("This is not a right triangle.\n");
        }
    }
}