#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
            count++;
        }
        if (count >= 3)
        {
            break;
        }
    }
    return 0;
}
