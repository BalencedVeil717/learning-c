#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choice;

menu:
    printf("1. Add\n2. Subtract\n3. Exit\n\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Add\n");
    }
    else if (choice == 2)
    {
        printf("Subtract\n");
    }
    else if (choice == 3)
    {
        return 0;
    }

    goto menu;
    return 0;
}
