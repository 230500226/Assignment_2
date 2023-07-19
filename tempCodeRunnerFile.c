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

    typedef union {
        int integer;
        float floatingPoint;
    }   DataValue;

// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int main(){

    DataValue data;
    char input[20];

    printf("Enter a number: ");
    fgets(input, 20, stdin);

    if (sscanf(input, "%f", &data.floatingPoint) == 1)
        printf("The input is a floating point number: %f\n", data.floatingPoint);   
    else if (sscanf(input, "%d", &data.integer) == 1)
        printf("The input is an integer: %d\n", data.integer);
    else
        printf("The input is not a valid number\n");

return 0;}