#include <stdio.h>

int main(int argc, char const *argv[])
{
    char chat;

    while (1)
    {
        scanf(" %c", &chat);
        if (chat == 'q')
        {
            break;
        }
        if (chat == ' ')
        {
            continue;
        }
        printf("Entered %c\n", chat);
    }
    return 0;
}
