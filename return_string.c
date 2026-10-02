#include <stdio.h>

char *getMessage()
{
    return "Welcome to C Functions";
}

int main()
{
    char *message;

    message = getMessage();

    printf("%s\n", message);

    return 0;
}
