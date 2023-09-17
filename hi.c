#include <cs50.h>
#include <stdio.h>


int main (void)
{
    string x[2];
    x[0] = "Hi!";
    x[1] = "BYE!";

    printf("%c%c%c\n", x[0][0], x[0][1], x[0][2]);
    printf("%c%c%c\n", x[1][0], x[1][1], x[1][2]);

}