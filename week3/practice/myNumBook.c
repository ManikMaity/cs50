#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
    string name;
    long num;
}
person;

const int length = 2;

int main(void)
{
    person friends[length];

    friends[0].name = "Shantarup";
    friends[0].num = 9636683818;

    friends[1].name = "Manik";
    friends[1].num = 93330685099;

    string fname = get_string("Friends Name: ");

    for (int i = 0; i < length; i++)
    {
        if(strcmp(friends[i].name, fname) == 0)
        {
            printf("Found %ld\n", friends[i].num);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}