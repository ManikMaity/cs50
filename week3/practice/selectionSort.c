#include <cs50.h>
#include <stdio.h>


const int length = 6;
void sort(int n, int array[]);
void printArray(int array[]);
int main (void){

    int array[] = {5, 2, 6, 1, 3, 0};
    sort(length, array);
    printArray(array);


}

void sort(int n, int array[])
{
    for (int i = 0; i < n -1; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array [i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[])
{
    for (int i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}