#include<stdio.h>
struct Student
{
  int subject1_marks;
  int subject2_marks;
  int subject3_marks;
};
int total(struct Student *s)
{
    int sum = s->subject1_marks + s->subject2_marks + s->subject3_marks;
    return sum;
}
int main()
{
 struct Student s1;
 s1.subject1_marks=100;
 s1.subject2_marks=100;
 s1.subject3_marks=80;
 printf("total marks are :%d", total(&s1));


 
}