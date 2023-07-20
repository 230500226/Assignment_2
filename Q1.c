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
// Define a struct to store the Dates
typedef struct {
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date;

// state global variable if any

/******** FUNCTIONS (DECLARE/DEFINE) *********/
// Function to compare the two dates
int compareDates(Date d1, Date d2) {

    // Compare the year
    if (d1.year < d2.year)
        return -1;
    // Compare the month
    else if (d1.month > d2.month)
        return 1;
    else {
        if (d1.month < d2.month)
            return -1;
        else if (d1.month > d2.month)
            return 1;
        else {
            // Compare the day
            if (d1.day < d2.day)
                return -1;
            else if (d1.day > d2.day)
                return 1;
            else
                return 0;
        }
    }
}

//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;

/************* MAIN FUNCTION**************/
int main(){

    // Create two Date structs and initialize them with specific dates
    Date date1 = {20, 7, 2023}; // More recent Date
    Date date2 = {17, 7, 2023}; // Less recent Date

    // Call the compareDates function to compare the two dates
    int result = compareDates(date1, date2);

    // Check the result and print the appropriate message based on the comparison
    if (result == -1)
        printf("Date 1 is earlier than Date 2\n");
    else if (result == 1)
        printf("Date 2 is earlier than Date 1\n");
    else
        printf("Date 1 is the same as Date 2\n");

    return 0;
}
