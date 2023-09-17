#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int get_size(void);
    void print_grid(int size);
    // int x = get_int("Enter the number ? you want - ");
    // for(int i = 1; i<=x; i++)
    // {
    //     printf("?");
    // }
    // printf("\n");

    // int b = get_int("Enter the number of bricks - ");
    // for (int i = 0; i<b; i++)
    // {
    //     printf("#\n");
    // }

    //get size of grid

    int x = get_size();


    // print grid bricks
    print_grid(x);

}





























int get_size(void)
{
    int n;
    do
    {
        n = get_int("Enter the size - ");
    }
    while(n<1);
    return n;

}
void print_grid(size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


