// Convert Days to Months and Days: Input total days and convert it into months (assuming 30 days/month) and leftover days.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int days, months;
    printf("Enter no. of days : ");
    scanf("%d", &days);
    months = (days / 30);
    printf("%d months and %d days", months, (days % 30));
    return 0;
}
