// Write a C Program to Display Student Details Using Structure
#include <stdio.h>

struct student_info
{
    char name[20] ;
    int roll;
    float marks;

};

int main(){
struct student_info s;
printf("Enter student information\n");
printf("\nEnter the name of student s :");
scanf("%s", &s.name);
printf("\nEnter the roll number of student s :");
scanf("%d", &s.roll);
printf("\nEnter the marks of student s:");
scanf("%f", &s.marks);
// Display student in formation

printf("Student Name: %s\n ", s.name);
printf("Student roll: %d\n ", s.roll);
printf("Student marks: %f\n ", s.marks);




struct student_info classX;
printf("Enter student information\n");
printf("\nEnter the name of students classX :");
scanf("%s", &classX.name);
printf("\nEnter the roll number of student s :");
scanf("%d", &classX.roll);
printf("\nEnter the marks of student s:");
scanf("%f", &classX.marks);
// Display student in formation

printf("Student Name: %s\n ", classX.name);
printf("Student roll: %d\n ", classX.roll);
printf("Student marks: %f\n ", classX.marks);

}