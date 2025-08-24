#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 1;
    int x;
    for (x = 1; x <= 100; x++)
    {
        if (count > 10)
        {
            break;
        }
        if (x % 5 == 0)
        {
            count++;
            printf("%d \n", x);
        }
    }
    return 0;
}
