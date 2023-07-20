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
// Union to store either an integer or a floating-point number
typedef union {
    int integer;
    float real;
} Number;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Declare a variable num of type Number (union)
    Number num;

    // Store the value 1 in the integer member of the union
    num.integer = 1;
    // num.real = 1.1;

    // Print both members of the union
    printf("Integer :%d\n", num.integer);
    printf("Real :%.1f\n", num.real);

    return 0;
}
