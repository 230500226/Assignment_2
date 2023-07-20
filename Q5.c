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
const int numBooks = 10; // Number of books in the array

// Define a struct to represent a book
typedef struct {
    char title[100];
    char author[100];
    unsigned int pages;
} Book;
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
// Function to sort the books array in ascending order based on the number of pages
void sortSizeOfPages(Book books[], int numBooks) { // Using bubble sort
    for (int i = 0; i < numBooks - 1; i++) { 
        for (int j = i + 1; j < numBooks; j++) {
            if (books[i].pages > books[j].pages) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int main(){

    Book books[numBooks]; // Declare an array of Book type to store the books

    // Populate the books array
    strcpy(books[0].title, "Harry Potter and the Sorcerer's Stone");
    strcpy(books[0].author, "J. K. Rowling");
    books[0].pages = 309;

    strcpy(books[1].title, "Harry Potter and the Chamber of Secrets");
    strcpy(books[1].author, "J. K. Rowling");
    books[1].pages = 341;

    strcpy(books[2].title, "Harry Potter and the Prisoner of Azkaban");
    strcpy(books[2].author, "J. K. Rowling");
    books[2].pages = 435;

    strcpy(books[3].title, "Harry Potter and the Goblet of Fire");
    strcpy(books[3].author, "J. K. Rowling");
    books[3].pages = 734;

    strcpy(books[4].title, "Harry Potter and the Order of the Phoenix");
    strcpy(books[4].author, "J. K. Rowling");
    books[4].pages = 870;

    strcpy(books[5].title, "Harry Potter and the Half-Blood Prince");
    strcpy(books[5].author, "J. K. Rowling");
    books[5].pages = 652;

    strcpy(books[6].title, "Harry Potter and the Deathly Hallows");
    strcpy(books[6].author, "J. K. Rowling");
    books[6].pages = 759;

    strcpy(books[7].title, "Harry Potter and the Cursed Child");
    strcpy(books[7].author, "J.K. Rowling, Jack Thorne & John Tiffany");
    books[7].pages = 343;

    strcpy(books[8].title, "Harry Potter and the 8 to make it 9");
    strcpy(books[8].author, "J.K. Rowling, Jack Thorne & John Tiffany");
    books[8].pages = 345;

    strcpy(books[9].title, "Harry Potter and the 9 to make it 10");
    strcpy(books[9].author, "J.K. Rowling, Jack Thorne & John Tiffany");
    books[9].pages = 349;

    // Call the sortSizeOfPages function to sort the books array in ascending order based on pages
    sortSizeOfPages(books, numBooks);

    // Display the sorted books with their title, author, and number of pages
    for (int i = 0; i < numBooks; i++) {
        printf("%d. %s by %s: %d pages\n", i+1, books[i].title, books[i].author, books[i].pages);
    }

return 0;}