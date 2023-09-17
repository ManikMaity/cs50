#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    // Calculate Latters, words and sentences
    int letters = 0;
    int words = 1;
    int sentence = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            letters++;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letters++;
        }
        else if (text[i] == 32)
        {
            words++;
        }
        else if (text[i] == 33 || text[i] == 63 || text[i] == 46)
        {
            sentence++;
        }
    }

    float index1 = letters / (float) words * 100;
    float index2 = sentence / (float) words * 100;
    float index = 0.0588 * index1 - 0.296 * index2 - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}