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

// Define a union to store either an integer or a floating-point number
typedef union {
    int integer;
    float floatingPoint;
} DataValue;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    DataValue data; // Declare a variable of type DataValue to store the input data
    char input[20]; // Array to store the user input as a string

    printf("Enter a number: ");
    fgets(input, 20, stdin); // Read the user input as a string

    // Check if the input contains a decimal point to determine if it's a floating-point or an integer
    if (strchr(input, '.') != NULL) {
        // If the input has a decimal point, try to parse it as a floating-point number
        if (sscanf(input, "%f", &data.floatingPoint) == 1)
            printf("The input is a floating point number: %f\n", data.floatingPoint);
        else
            printf("The input is not a valid number\n");
    } else {
        // If the input does not have a decimal point, try to parse it as an integer
        if (sscanf(input, "%d", &data.integer) == 1)
            printf("The input is an integer: %d\n", data.integer);
        else
            printf("The input is not a valid number\n");
    }

    return 0;
}
