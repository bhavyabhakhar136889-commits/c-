//Write a function to print names of students whose grade is greater than 5.0.
#include <stdio.h>


struct Student {
    char name[50];
    float grade;
};


void print(struct Student students[], int size)
{
    printf("\nStudents with grade greater than 5.0:\n");

    for(int i = 0; i < size; i++)
        {
            if(students[i].grade > 5.0)
            {
                printf("%s\n", students[i].name);
            }
        }
}

int main()
{
    int n;
    struct Student student1[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        {
            printf("\nEnter name of student %d: ", i + 1);
            scanf("%s", student1[i].name);

            printf("Enter grade of student %d: ", i + 1);
            scanf("%f", &student1[i].grade);
        }

    print(student1, n);

    return 0;
}
