//Sort above data by score in descending order.
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

void sortByScore(struct student s[], int n) {
    struct student temp;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
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

    sortByScore(s, n);

    printf("\n--- Students Sorted by Score (Descending) ---\n");
    for(int i=0; i<n; i++) {
        printStudent(s[i]);
    }

    return 0;
}
