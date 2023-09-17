#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size;
    do
    {
        size = get_int("Enter the array size: ");
    }
    while (size < 0);

    int x[size];

    x[0] = 1;
    printf("%i\n", x[0]);
    for (int i = 1; i < size; i++)
    {
        x[i] = 2 * x[i - 1];
        printf("%i\n", x[i]);
    }
}