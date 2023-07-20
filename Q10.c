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
#define PI 3.14159

// Define a union to store the data for either a circle or a rectangle
typedef union {
    struct circle {
        int radius:4;
    } circle;
    struct rectangle {
        int length:3;
        int width:3;
    } rectangle;
} Shape;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Declare variables to hold user input and calculated area
    int choice = 0;
    float area;

    // Prompt the user for their choice
    printf("Would you like to calculate the area of a circle (1), or a rectangle (2)\n");
    scanf("%d",&choice);

    // Check the user's choice and calculate the area accordingly
    if (choice == 1){
        // Calculate the area of the circle
        Shape shape;
        int temp_radius; // Temporary variable to store the user input for radius
        printf("Enter the radius of the circle:\n");
        scanf("%d", &temp_radius);
        shape.circle.radius = temp_radius;
        area = PI * pow(shape.circle.radius, 2);
        printf("The area of the circle is %.2f\n", area);

    } else if (choice == 2) {
        // Calculate the area of the rectangle
        Shape shape;
        int temp_length, temp_width; // Temporary variables to store the user input for length and width
        printf("Enter the length and width of the rectangle:\n");
        scanf("%d %d", &temp_length, &temp_width);
        shape.rectangle.length = temp_length;
        shape.rectangle.width = temp_width;
        area = shape.rectangle.length * shape.rectangle.width;
        printf("The area of the rectangle is %.2f\n", area);

    } else {
        // Invalid choice
        printf("Please enter a valid choice\n");
    }

return 0;}
