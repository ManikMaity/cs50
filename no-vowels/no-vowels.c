#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Incorrect Comand!, Ex. Command - ./no-vowels text\n");
        return 1;
    }
    string word = argv[1];
    printf("%s\n", replace(word));
}

// Replace the vowels
string replace(string word)
{
    int length = strlen(word);

    for (int i = 0; i < length; i++)
    {
        if (word[i] == 'a')
        {
            word[i] = '6';
        }
        else if (word[i] == 'e')
        {
            word[i] = '3';
        }
        else if (word[i] == 'i')
        {
            word[i] = '1';
        }
        else if (word[i] == 'o')
        {
            word[i] = '0';
        }
    }

    return word;
}