#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while (i <= 10)
    {
        printf("%d", i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}