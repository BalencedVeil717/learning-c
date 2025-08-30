#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    while (1)
    {
        scanf(" %c", &ch);

        if (ch == 'q')
            break;

        if (ch == ' ')
            continue;

        printf("You typed %c\n", ch);
    }
    return 0;
}
