#include <stdio.h>
#include <string.h>

int main()
{
    char secret[] = "nu2026";
    char input[50];

    printf("Enter code: ");
    scanf("%49s", input);

    if(strcmp(input, secret) == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }

    if(strncmp(input, "nu", 2) == 0)
    {
        printf("Code starts with \"nu\": Yes\n");
    }
    else
    {
        printf("Code starts with \"nu\": No\n");
    }

    return 0;
}
