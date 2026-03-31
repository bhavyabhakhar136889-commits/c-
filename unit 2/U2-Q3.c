//Sort above data by name.
#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[5], temp;
    int i, j;

    // Input details for 5 students
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


    for(i = 0; i < 5-1; i++) {
        for(j = i+1; j < 5; j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }


    printf("\n--- Student Records Sorted by Name ---\n");
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
