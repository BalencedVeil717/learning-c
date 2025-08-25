#include <stdio.h>

enum days
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main(void)
{
    for (enum days day = Monday; day <= Sunday; day++)
    {
        printf("%d\n", day);
    }
    return 0;
}
