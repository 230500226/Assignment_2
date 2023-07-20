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
// Define a union named "Data" to hold integer and binary representations
typedef union {
    int value; // Integer value
    struct binary { // Struct to hold individual bits using bit-fields
        int bit1:1; // 1-bit field for bit1
        int bit2:2; // 2-bit field for bit2
        int bit3:3; // 3-bit field for bit3
    } binary; // Member name for the bit-field struct
} Data;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
// Function prototypes, if any, would go here.

//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Declare a Data union variable named "data1"
    Data data1;

    // Initialize the integer value of "data1"
    data1.value = 32;

    // Initialize the binary struct memebers of "data1"
    data1.binary.bit1 = 1;
    data1.binary.bit2 = 2;
    data1.binary.bit3 = 3;

    // Printing the union members
    printf("main value is %d\n", data1.value); // Output: main value is 32
    printf("bit 1 value is %d\n", data1.binary.bit1); // Output: bit 1 value is 1
    printf("bit 2 value is %d\n", data1.binary.bit2); // Output: bit 2 value is 2
    printf("bit 2 value is %d\n", data1.binary.bit3); // Output: bit 2 value is 3

    return 0;
}
