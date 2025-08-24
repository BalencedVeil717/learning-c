// Area of Circle: Use a symbolic constant #define for π (e.g., 3.14) and calculate the area given the radius.

#include <stdio.h>
#define PI 3.14159
int main()
{
    float radius, area;
    printf("Enter radius : ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area = %f", area);
    return 0;
}