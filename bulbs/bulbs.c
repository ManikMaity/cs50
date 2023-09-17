#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string text = get_string("Text: ");
    int a[BITS_IN_BYTE];

    // char in text
    for (int i = 0; i < strlen(text); i++)
    {

        int cNum = (int) text[i];

        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            a[j] = cNum % 2;
            cNum /= 2;
        }

        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(a[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
