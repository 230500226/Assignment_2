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
// Define a struct to store information about a person
typedef struct {
    char name[100];
    int age;
    float height;
} Person;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
// Function prototypes, if any, would go here.

//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Create a Person struct and initialize its memebers 
    Person person1 = {"John", 21, 177.8};

    // Print the information about the person
    printf("Person %d: name: %s, age: %d years, height: %.1fcm\n", 1, person1.name, person1.age, person1.height);

    return 0;
}
