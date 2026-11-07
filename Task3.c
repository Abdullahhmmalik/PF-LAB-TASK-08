#include <stdio.h>

int main()
{
    int numbers[] = {4, 9, 2, 7, 5};
    int *p = numbers;
    int sum = 0;
    int largest = *p;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + *p;

        if(*p > largest)
        {
            largest = *p;
        }

        p++;
    }

    printf("Sum: %d\n", sum);
    printf("Largest number: %d\n", largest);

    return 0;
}
