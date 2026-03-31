#include <stdio.h>

// Structure declaration
struct Student {
    int id;
    float marks;
    char grade;
};

// Union declaration
union Data {
    int id;
    float marks;
    char grade;
};

int main() {

    struct Student s;
    union Data u;

    // User input for structure
    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("Enter Grade: ");
    scanf(" %c", &s.grade);

    // Copy values to union (one by one)
    printf("\nEnter values for Union:\n");

    printf("Enter ID: ");
    scanf("%d", &u.id);

    printf("Enter Marks: ");
    scanf("%f", &u.marks);

    printf("Enter Grade: ");
    scanf(" %c", &u.grade);

    // Display structure values
    printf("\n--- Structure Data ---\n");
    printf("ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    printf("Grade = %c\n", s.grade);

    // Display union values
    printf("\n--- Union Data ---\n");
    printf("ID = %d\n", u.id);
    printf("Marks = %.2f\n", u.marks);
    printf("Grade = %c\n", u.grade);

    // Size comparison
    printf("\n--- Memory Comparison ---\n");
    printf("Size of Structure = %lu bytes\n", sizeof(s));
    printf("Size of Union = %lu bytes\n", sizeof(u));

    return 0;
}

