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
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/

typedef struct {
        unsigned int day;
        unsigned int month;
        unsigned int year;
    } Date;

int compareDates(Date d1, Date d2) {
    if  (d1.year < d2.year)
        return -1;
    else if (d1.month  > d2.month)
        return 1;
    else {
        if (d1.month < d2.month)
                return -1;
        else if (d1.month > d2.month)
                return 1;
        else {
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

    Date date1 = {20, 7, 2023}; //More recent
    Date date2 = {17, 7, 2023}; //Less recent

    int result = compareDates(date1, date2);

        if (result == -1)
            printf("Date 1 is earlier than Date 2\n");
        else if (result == 1)
            printf("Date 2 is earlier than Date 1\n");
        else 
            printf("Date 1 is the same as Date 2\n");

return 0;}
