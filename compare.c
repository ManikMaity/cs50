#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int number = get_int("Enter the first number -  ");
    int number1 = get_int("Enter the second number - ");

    if(number>number1)
    {
        printf("First number is bigger\n");
    }
    else if(number<number1)
    {
        printf("Second Number is bigger\n");
    }
    else
    {
        printf("Two numbers are equal\n");
    }
}