/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 20/07/2023

/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/************* GLOBAL VARIABLES ************/
#define MAX 3

// Define a struct to store Employee information
typedef struct {
    char name[100];
    int id;
    float salary;
} Employee;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Create an array of Employee structures to hold information for 3 employees
    Employee employees[MAX];

    // Populate the data for each employee in the array
    strcpy(employees[0].name, "John");
    employees[0].id = 1;
    employees[0].salary = 101.1;

    strcpy(employees[1].name, "Jane");
    employees[1].id = 2;
    employees[1].salary = 111.1;

    strcpy(employees[2].name, "Bob");
    employees[2].id = 1;
    employees[2].salary = 1111.12;

    // Find the employee with the highest salary by reading information for the three employees
    int highestId = 0;

    for (int i = 0; i < MAX; i++) {
        if (employees[i].salary > employees[highestId].salary){
            highestId = i;
        }
    }

    // Print the details of the employee with the highest salary
    printf("Employee number: %d, name: %s has the highest salary of %.2f\n", employees[highestId].id, employees[highestId].name, employees[highestId].salary);

return 0;}
