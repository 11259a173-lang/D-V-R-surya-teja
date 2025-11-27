#include<stdio.h>
struct Student {
int roll;
char name[20];
float marks;
};
int main() {
struct Student s;
printf("Enter roll, name and marks: ");
scanf("%d %s %f", &s.roll, s.name, &s.marks);
printf("Student Details:\n");
printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
return 0;
}
