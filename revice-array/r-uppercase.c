#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (void)
{
    string name = get_string("Enter your name - ");

// to uppercase using ASCII number of chars

    for(int i =0; i<strlen(name); i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", (name[i] - 32));
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");


// to uppercase by using the <ctype.h> library for ecah char
    for (int j = 0; j<strlen(name); j++)
    {
        if(islower(name[j]))
        {
            printf("%c", toupper(name[j]));
        }
        else
        {
            printf("%c", name[j]);
        }
    }
    printf("\n");


    // Direct to uppercase ny <ctype.h>
    for (int k = 0, n = strlen(name); k<n; k++)
    {
        printf("%c", toupper(name[k]));
    }
    printf("\n");
}