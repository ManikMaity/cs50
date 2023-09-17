#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    string s = get_string("Enter: ");
    int n = strlen(s);
    printf("%i\n", n);
}