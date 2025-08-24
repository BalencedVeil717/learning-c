// Rupees and Paise Split: Take decimal amount as input and split into rupees and paise parts.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float money;
    int rupees, paise;

    printf("Enter amount : ");
    scanf("%f", &money);

    rupees = money / 1;
    paise = (money - rupees) * 100 + 0.5; // 0,5 for rounding off

    printf("%d Rupees & %d", rupees, paise);

    return 0;
}
