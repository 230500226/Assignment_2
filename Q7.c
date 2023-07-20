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
// Define a union to represent the color components of an rgb pixel
typedef union {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color; // I prefer to use "Colour" ☕😂
// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
// Function prototypes, if any, would go here.

//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Declare a Colour union variable "color1"
    Color color1;

    // Initialize the color components of "color1"
    color1.red = 0;
    color1.green = 0;
    color1.blue = 255;

    // Print the color components of "color1"
    printf("red = %d, green = %d, blue = %d", color1.red, color1.green, color1.blue);

    // Output will be a white color (255,255,255)

    return 0;
}
