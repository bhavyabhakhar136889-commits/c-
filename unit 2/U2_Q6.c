//Write a function to print data of all students who joined in 2019.
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

void printStudent(struct student s) {
    printf("%d\t%s\t%s\t%d\t%.2f\n", s.rollno, s.name, s.department, s.year_of_joining, s.score);
}

void printJoined2019(struct student s[], int n) {
    printf("\n--- Students Joined in 2019 ---\n");
    for(int i=0; i<n; i++) {
        if(s[i].year_of_joining == 2019) {
            printStudent(s[i]);
        }
    }
}

int main() {
    int n = 5;
    struct student s[5];

    for(int i=0; i<n; i++) {
        printf("\nEnter data for student %d:\n", i+1);
        printf("Roll No: "); scanf("%d", &s[i].rollno);
        printf("Name: "); scanf("%s", s[i].name);
        printf("Department: "); scanf("%s", s[i].department);
        printf("Year of Joining: "); scanf("%d", &s[i].year_of_joining);
        printf("Score: "); scanf("%f", &s[i].score);
    }

    printJoined2019(s, n);

    return 0;
}
