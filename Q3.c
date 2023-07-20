/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 17/07/2023

/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/************* GLOBAL VARIABLES ************/
// Struct to store the Student's data
typedef struct{
    char name[50];
    int rollNumber;
    float marks;
} Student;
// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/

//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Delcare the array for 5 students
    Student students[5];

    // Populate the 5 students in the array students
    strcpy(students[0].name, "John");
    students[0].rollNumber = 1;
    students[0].marks = 85.5;

    strcpy(students[1].name, "Doe");
    students[1].rollNumber = 2;
    students[1].marks = 90.0;

    strcpy(students[2].name, "Jane");
    students[2].rollNumber = 3;
    students[2].marks = 95.5;

    strcpy(students[3].name, "Smith");
    students[3].rollNumber = 4;
    students[3].marks = 80.0;

    strcpy(students[4].name, "Bob");
    students[4].rollNumber = 5;
    students[4].marks = 75.5;

    // Output the students data
    for (int i = 0; i < 5; i++){
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.1f\n\n", students[i].marks);
    }

    return 0;
}
