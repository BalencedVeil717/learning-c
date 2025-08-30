#include <stdio.h>

int main()
{
    int choice;

menu: // main menu label
    printf("\n--- Jump Statement Playground ---\n");
    printf("1. goto (Calculator Menu)\n");
    printf("2. break (Divisible by 5 & 7)\n");
    printf("3. continue (Character Input)\n");
    printf("4. continue (Pattern Printing)\n");
    printf("5. switch-case (Days of Week)\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // ---------------- goto example ----------------
        int calcChoice;
    calcMenu:
        printf("\nCalculator: 1.Add  2.Subtract  3.Exit\n");
        scanf("%d", &calcChoice);
        if (calcChoice == 1)
            printf("Result: 2+3=5\n");
        else if (calcChoice == 2)
            printf("Result: 5-2=3\n");
        else if (calcChoice == 3)
            goto menu;
        goto calcMenu; // jump back to calculator menu
    }

    else if (choice == 2)
    {
        // ---------------- break example ----------------
        int count = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (i % 5 == 0 && i % 7 == 0)
            {
                printf("%d ", i);
                count++;
            }
            if (count == 5)
                break; // stop after 5 numbers
        }
        printf("\n");
    }

    else if (choice == 3)
    {
        // ---------------- continue example (chars) ----------------
        char ch;
        printf("Enter characters (q to quit, space is skipped):\n");
        while (1)
        {
            scanf(" %c", &ch);
            if (ch == 'q')
                break; // quit
            if (ch == ' ')
                continue; // skip space
            printf("You typed: %c\n", ch);
        }
    }

    else if (choice == 4)
    {
        // ---------------- continue example (pattern) ----------------
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j > 1 && j < i && i != 5)
                {
                    printf("  ");
                    continue; // skip printing star inside
                }
                printf("* ");
            }
            printf("\n");
        }
    }

    else if (choice == 5)
    {
        // ---------------- switch-case example ----------------
        int day;
        printf("Enter day number (1-3 for demo): ");
        scanf("%d", &day);

        switch (day)
        {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        default:
            printf("Invalid day!\n");
        }
    }

    else if (choice == 6)
    {
        printf("Goodbye!\n");
        return 0;
    }

    else
    {
        printf("Invalid choice!\n");
    }

    goto menu; // after finishing one demo, go back to main menu
}
