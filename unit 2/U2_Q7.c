//Add Two Complex Numbers by Passing Structure to a Function.
#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add(struct complex a, struct complex b) {
    struct complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main() {
    struct complex c1, c2, sum;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
