#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int sNum;
    int eNum;
    int year = 0;

    // TODO: Prompt for start size
    do
    {
        sNum = get_int("Strat Number: ");
    }
    while (sNum < 9);

    // TODO: Prompt for end size
    do
    {
        eNum = get_int("Ending Num: ");
    }
    while (eNum < sNum);

    // TODO: Calculate number of years until we reach threshold
    while (sNum < eNum)
    {
        sNum = sNum + (sNum / 3) - (sNum / 4);
        year++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", year);
}
