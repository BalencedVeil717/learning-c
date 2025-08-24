// Temperature Conversion: Convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float celsius, fahrenheit;
    printf("Enter temperature in celsius : ");
    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5) * celsius + 32;
    printf("%.2f celsius = %.2f fahrenheit", celsius, fahrenheit);
    return 0;
}
