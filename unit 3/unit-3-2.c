#include<stdio.h>

void area(float *r)
{
    float result;
    result = 3.14 * (*r) * (*r);
    printf("Area of circle = %.2f", result);
}

int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area(&radius);

    return 0;
}
