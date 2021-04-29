#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R;
    printf("please enter the radius:");
    scanf("%d", &R);
    for (int x = 0; x <= 2 * R; ++x)
    {
        for (int y = 0; y <= 2 * R; ++y)
        {
            if ((x - R) * (x - R) + (y - R) * (y - R) <= R * R)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}