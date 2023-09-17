#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string key_str = argv[1];

    // Check if the key is a valid positive integer
    for (int i = 0; i < strlen(key_str); i++)
    {
        if (!isdigit(key_str[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(key_str);

    string ptext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(ptext); i++)
    {
        char c = ptext[i];

        if (isalpha(c))
        {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + key) % 26 + base;
        }

        printf("%c", c);
    }
    printf("\n");
    return 0;
}
