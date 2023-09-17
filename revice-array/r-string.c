#include <stdio.h>
#include  <cs50.h>
#include <string.h>

int main (void)
{
    string x = "BHE!YI";
    string name = get_string("Enter your name? - ");
    printf("%c%c%c\n", x[1], x[5], x[3]);
    printf("%c%c%c%c\n", x[0], x[4], x[2], x[3]);


    // to find length of string using '\0'
    int length = 0;
    while (name[length] != '\0')
    {
        length++;
    }
    printf("%i\n", length);

    // length of string using c librabry - <string.h>

    printf("%lu\n", strlen(name));

}