
// Modify above program for 5 students record.
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[5];
    int i;


    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i+1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Department: ");
        scanf("%s", s[i].department);

        printf("Enter Year of Joining: ");
        scanf("%d", &s[i].year_of_joining);

        printf("Enter Score: ");
        scanf("%f", &s[i].score);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].department);
        printf("Year of Joining: %d\n", s[i].year_of_joining);
        printf("Score: %.2f\n", s[i].score);
    }

    return 0;
}
