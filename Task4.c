#include <stdio.h>

int main()
{
    const char *p = "Hello World 2026";
    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int spaces = 0;

    while(*p != '\0')
    {
        if(*p >= 'A' && *p <= 'Z')
        {
            uppercase++;
        }
        else if(*p >= 'a' && *p <= 'z')
        {
            lowercase++;
        }
        else if(*p >= '0' && *p <= '9')
        {
            digits++;
        }
        else if(*p == ' ')
        {
            spaces++;
        }

        p++;
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}
