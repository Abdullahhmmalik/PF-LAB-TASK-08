#include <stdio.h>

int main()
{
    int age = 20;
    int *p = &age;

    printf("Age before: %d\n", age);
    printf("Pointer value: %d\n", *p);

    *p = 21;

    printf("Age after: %d\n", age);

    return 0;
}
