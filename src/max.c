#include <stdio.h>
#include <assert.h>

int max(int *numbers, int size)
{
    int biggest_int = numbers[0];

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > biggest_int)
            biggest_int = numbers[i];
    }
    return biggest_int;
}
