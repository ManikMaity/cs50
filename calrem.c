#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long j;
    long i;
    do
    {
        j = get_long("Number: ");
        i = get_long("Modu: ");
        printf("%ld \n", (j%i));
    }
    while(true);
}