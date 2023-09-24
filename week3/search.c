#include <cs50.h>
#include <stdio.h>
#include <string.h>


const int arrayLenth = 6;

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");

    for (int i = 0; i < arrayLenth; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            /* We include return to make sure the programm ends if found.
             Or else it will output both found and not found */
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}