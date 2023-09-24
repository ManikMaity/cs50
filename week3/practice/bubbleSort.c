#include <cs50.h>
#include <stdio.h>

const int length = 6;
void sort (int n, int array[]);
void printArray (int array[]);
int main(void)
{
    int array[] = {9, 10, 152, 21, 5, 1};
    printArray(array);
    sort(length, array);
    printArray(array);
}

void sort (int n, int array[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array [j] = array[j+1];
                array [j +1] = temp;
            }
        }
    }
}



void printArray (int array[])
{
    for (int i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}