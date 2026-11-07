#include <stdio.h>

int divide(int a, int b, int *result)
{
    if(result == NULL)
    {
        return -1;
    }

    if(b == 0)
    {
        return -1;
    }

    *result = a / b;
    return 0;
}

int main()
{
    int result;
    int status;

    status = divide(20, 4, &result);
    if(status == 0)
    {
        printf("Division successful: %d\n", result);
    }
    else
    {
        printf("Division failed\n");
    }

    status = divide(20, 0, &result);
    if(status == -1)
    {
        printf("Division by zero: Error\n");
    }

    status = divide(20, 4, NULL);
    if(status == -1)
    {
        printf("NULL pointer: Error\n");
    }

    return 0;
}
