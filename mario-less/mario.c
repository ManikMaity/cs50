#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    }
    while (x < 1 || x > 8);

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        for (int y = 1; y <= i; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}