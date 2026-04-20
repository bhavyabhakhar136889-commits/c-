#include<stdio.h>

struct student{
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};

void main(){

    struct student s;

    printf("enter a roll no: ");
    scanf("%d",&s.rollno);
    printf("enter a name : ");
    scanf("%s",&s.name);
    printf("enter department : ");
    scanf("%s",&s.department);
    printf("enter year of joining : ");
    scanf("%d",&s.year);
    printf("enter a score : ");
    scanf("%f",&s.score);

    printf("\n ---student---\n");
    printf("rollno : %d\n",s.rollno);
    printf("name : %s\n",s.name);
    printf("department : %s\n",s.department);
    printf("year of joining : %d\n",s.year);
    printf("score : %.2f\n",s.score);

}
