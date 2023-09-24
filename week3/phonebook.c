#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string pName;
    string pNum;
}
person;

const int length = 2;



int main (void)
{
    person people[length];

    people[0].pName = "manik";
    people[0].pNum = "+91-9330685099";

    people[1].pName = "hari";
    people[1].pNum = "+81-5698743259";

    string name = get_string("Name: ");

    for (int i = 0; i < length; i++)
    {
        if (strcmp(people[i].pName, name) == 0)
        {
            printf("Found, Number: %s\n", people[i].pNum);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}