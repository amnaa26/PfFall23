#include <stdio.h>
#include <string.h>

typedef struct {
    int CourseId;
    char CourseName[20];
} Register;

typedef struct {
    Register course;
    int StudentId;
    char FirstName[20];
    char LastName[20];
    char cellno[15];
    char email[30];
} Student;

void input(Student students[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter student id: ");
        scanf("%d", &students[i].StudentId);

        printf("Enter first name: ");
        scanf("%19s", students[i].FirstName);

        printf("Enter last name: ");
        scanf("%19s", students[i].LastName);

        printf("Enter cell number: ");
        scanf("%14s", students[i].cellno);

        printf("Enter email: ");
        scanf("%29s", students[i].email);

        printf("Enter student's course id: ");
        scanf("%d", &students[i].course.CourseId);

        printf("Enter student's course name: ");
        scanf("%19s", students[i].course.CourseName);

        printf("\n");
    }
}

void output(Student students[5]) {
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("\nStudent id: %d\nFirst name: %s\nLast name: %s\nCell number: %s\nEmail: %s\nCourse ID: %d\nCourse name: %s\n",
               students[i].StudentId,
               students[i].FirstName,
               students[i].LastName,
               students[i].cellno,
               students[i].email,
               students[i].course.CourseId,
               students[i].course.CourseName
        );
    }
}

int main() {
    Student students[5];

    input(students);
    output(students);

    return 0;
}

