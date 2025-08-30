#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, choice;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

menu:
    printf("Choose an Operation - \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division \n5. Modulo\n6. Exit\n\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Addition : %d + %d = %d\n", a, b, (a + b));
    }
    else if (choice == 2)
    {
        printf("Subtraction : %d - %d = %d\n", a, b, (a - b));
    }
    else if (choice == 3)
    {
        printf("Multiplication : %d * %d = %d\n", a, b, (a * b));
    }
    else if (choice == 4)
    {
        printf("Division : %d / %d = %d\n", a, b, (a / b));
    }
    else if (choice == 5)
    {
        printf("Modulo : %d %% %d = %d\n", a, b, (a % b));
    }
    else if (choice == 6)
    {
        printf("See you later.\n");
        return 0;
    }

    goto menu;
    return 0;
}
