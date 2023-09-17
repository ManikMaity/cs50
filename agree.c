#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char x = get_char("DO you Agree - ");

    if(x == 'y' || x == 'Y')
    {
        printf("Thank you for agreing the terms and condi\n");
    }
    else if (x == 'n' || x == 'N')
    {
        printf("Not Agrreed\n");
    }
    else
    {
        printf("Enter valid input : y -> yes || n -> No\n");
    }

}