#include <stdio.h>
#include <cs50.h>



const int N = 3;

float average(int score[]);


int main (void)
{
    int score[N];
    for (int i = 0; i < N ; i++)
    {
        score[i] = get_int("Enter Score: ");
    }

    printf("Average: %f\n", average(score));
}


float average(int score[])
{
    int sum = 0;
    for (int i=0;  i < N; i++)
    {
        sum += score[i];
    }
    return sum / (float) N;
}