#include <stdio.h>
#include <cs50.h>

int main (int arg, string argv[])
{
    if (  arg == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, There\n");
    }
}