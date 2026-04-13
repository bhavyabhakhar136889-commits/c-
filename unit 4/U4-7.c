#include <stdio.h>

struct emp {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct emp e;
    int n, i;
    float max = 0;
    struct emp highest;

    // Step 1: Write records into file
    fp = fopen("emp.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter empcode, name, salary: ");
        scanf("%d %s %f", &e.empcode, e.empname, &e.salary);

        fprintf(fp, "%d %s %f\n", e.empcode, e.empname, e.salary);
    }

    fclose(fp);

    // Step 2: Read and find highest salary
    fp = fopen("emp.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    while (fscanf(fp, "%d %s %f", &e.empcode, e.empname, &e.salary) != EOF) {
        if (e.salary > max) {
            max = e.salary;
            highest = e;
        }
    }

    fclose(fp);

    // Step 3: Display result
    printf("\nEmployee with highest salary:\n");
    printf("Code: %d\nName: %s\nSalary: %.2f",
           highest.empcode, highest.empname, highest.salary);

    return 0;
}
