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

    // Step 1: Write records into binary file
    fp = fopen("emp.dat", "wb");   // write binary

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter empcode, name, salary: ");
        scanf("%d %s %f", &e.empcode, e.empname, &e.salary);

        fwrite(&e, sizeof(e), 1, fp);   // write structure
    }

    fclose(fp);

    // Step 2: Read and display records
    fp = fopen("emp.dat", "rb");   // read binary

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\nEmployee Records:\n");

    while (fread(&e, sizeof(e), 1, fp) == 1) {
        printf("Code: %d\tName: %s\tSalary: %.2f\n",
               e.empcode, e.empname, e.salary);
    }

    fclose(fp);

    return 0;
}
