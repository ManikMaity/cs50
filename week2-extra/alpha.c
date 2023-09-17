#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string letter = get_string("word: ");
    int length = strlen(letter);
    int cValue = letter[0];
    int alpha = 1;
    for(int i = 1; i<length; i++)
    {
        if(letter[i]>cValue)
        {
            alpha++;
        }
        cValue = letter[i];
    }
    if (alpha == length)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}