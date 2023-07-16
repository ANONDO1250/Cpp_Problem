#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

// Book structure
typedef struct {
    int id;
    char title[100];
    char author[100];
    int quantity;
} Book;

Book library[MAX_BOOKS];  // Array to store books
int numBooks = 0;         // Number of books in the library

// Function prototypes
void addBook();
void displayBooks();
void searchBook();

int main() {
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;
}

// Function to add a book to the library
void addBook() {
    if (numBooks == MAX_BOOKS) {
        printf("The library is full. Cannot add more books.\n");
        return;
    }

    Book newBook;
    printf("\nEnter Book ID: ");
    scanf("%d", &newBook.id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]s", newBook.title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]s", newBook.author);
    printf("Enter Quantity: ");
    scanf("%d", &newBook.quantity);

    library[numBooks++] = newBook;
    printf("Book added successfully!\n");
}

// Function to display all books in the library
void displayBooks() {
    if (numBooks == 0) {
        printf("No books found in the library.\n");
        return;
    }

    printf("\nLibrary Books:\n");
    printf("-------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\n");
    printf("-------------------------------\n");

    for (int i = 0; i < numBooks; i++) {
        printf("%d\t%s\t\t%s\t\t%d\n", library[i].id, library[i].title, library[i].author, library[i].quantity);
    }
}

// Function to search for a book by title or author
void searchBook() {
    if (numBooks == 0) {
        printf("No books found in the library.\n");
        return;
    }

    char keyword[100];
    printf("\nEnter the title or author to search: ");
    scanf(" %[^\n]s", keyword);

    printf("\nSearch Results:\n");
    printf("-------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\n");
    printf("-------------------------------\n");

    int found = 0;

    for (int i = 0; i < numBooks; i++) {
        if (strstr(library[i].title, keyword) != NULL || strstr(library[i].author, keyword) != NULL) {
            printf("%d\t%s\t\t%s\t\t%d\n", library[i].id, library[i].title, library[i].author, library[i].quantity);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found matching the search criteria.\n");
    }
}
