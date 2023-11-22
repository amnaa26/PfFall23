/*
 * Programmer: Amna(23K-0066)
 * Date: 20/11/2023
 * Desc: Create a structure to specify data on students given below:
	 Roll number, Name, Department, Course, Year of joining. Assume that there are not more than 450 students in the college.
*/

#include <stdio.h>
#include <string.h>

struct Data{
	int rollNumber;
	char Name[50];
	char Department[50];
	char Course[50];
	int year;
};

int main() {
	int i, NumOfStudents, givenyear, givenrollnumber;
	struct Data student[450];
	
	//Input the number of students
	printf("Enter number of students: "); 
	scanf("%d", &NumOfStudents);
	
	//sample data
	student[0].rollNumber = 873;
	strcpy(student[0].Name, "Abc");
	strcpy(student[0].Department, "Physics");
	strcpy(student[0].Course, "Atomic Physics");
	student[0].year = 2019;
	
	student[1].rollNumber = 9870;
	strcpy(student[1].Name, "Xyz");
	strcpy(student[1].Department, "Computer Science");
	strcpy(student[1].Course, "Data Science");
	student[1].year = 2022;
	
	student[2].rollNumber = 9780;
	strcpy(student[2].Name, "Blah");
	strcpy(student[2].Department, "Engineering");
	strcpy(student[2].Course, "Mechanical Engineering");
	student[2].year = 2019;
	
	//Asking user to enter year so that the program can find students of that partcular year
	printf("Enter year ");
	scanf("%d", &givenyear);
	printf("\nStudent's names who joined in given year are:\n");
	for(i = 0; i < NumOfStudents; ++i){
		if(student[i].year == givenyear){
			printf("%s\n", student[i].Name);
		}
	}
	
	//Asking user to enter roll number so that the program can print the data of that roll number
	printf("\n\nEnter rollnumber ");
	scanf("%d", &givenrollnumber);
	for(i = 0; i < NumOfStudents; ++i){
		if(student[i].rollNumber == givenrollnumber){
			printf("Name: %s\n",student[i].Name);
			printf("Department: %s\n",student[i].Department);
			printf("Course: %s\n",student[i].Course);
			printf("Year of joining: %d\n",student[i].year);
		}
	}
	
}
