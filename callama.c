#include <stdio.h>
#include <cs50.h>

int main (void)
{
     //current num of Lama
    int cl;
    do
    {
    cl = get_int("Current number of Lama? ");
    }
    while(cl<1);

    //Desired goal num of Lama
    int dl;
    do
    {
        dl = get_int("Enter num of desired Lama? ");
    }
    while(dl<cl);

    //Algorithm
   int year = 0;

   while(cl<dl)
   {
    cl += cl/12;
    year++;
   }
   printf("%i \n", year);

}