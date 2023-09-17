#include <stdio.h>
#include <cs50.h>


float average (int number[]);
const int N = 3;

int main (void)
{

    int score[N];

    for (int i =0; i<N; i++)
    {
        score[i] = get_int("Enter Score: ");
    }
    printf("Agerage: %f\n", average(score));
}


float average (int number[])
{
    int sum = 0;
    for (int i = 0; i <N; i++)
    {
        sum += number[i];
    }

    return (sum / (float) N);
}