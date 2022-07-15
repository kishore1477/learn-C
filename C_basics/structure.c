#include <stdio.h>
int main()
{
    printf("Welcome to structure in c\n");
    struct student
    {
        int age;
        char month;
        char name[23];
        float GPA;
    } ;
    struct student e1 = {1,'f',"kishore",3.33};
    struct student e2 = {2,'j'};
//    printf(" e1 my name  is %s\n",e1.name); 
//    printf(" e1 my GPA  is %0.2f\n",e1.GPA); 
//    printf(" e1 my age is %d\n",e1.age); 
//    printf(" e1 my birth month is %c\n",e1.month); 
//    printf(" e2 my age is %d\n",e2.age); 
//    printf(" e2 my birth month is %c\n",e2.month); 
// 😫 structure in terms in pointer
struct math
{
    int chapter;
    int *page;

};
struct math stu_1 = {1,2};
printf("student1  %d %d :\n",stu_1.chapter,stu_1.page);

// struct Node
// {
    
//     int head;
//     struct Node *next;
// };
// int polly=3;
// struct node *polly;



   return 0;
}