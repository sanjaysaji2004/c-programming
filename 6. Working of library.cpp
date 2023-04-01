#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[50];
    int year;
};

struct Book library[MAX_BOOKS];
int count = 0;

void addBook() {
    struct Book book;
    printf("Enter the book title: ");
    scanf("%s", book.title);
    printf("Enter the author's name: ");
    scanf("%s", book.author);
    printf("Enter the publication year: ");
    scanf("%d", &book.year);

    library[count++] = book;

    printf("Book added successfully!\n");
}

void displayBooks() {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("%-30s %-20s %-10s\n", "Title", "Author", "Year");
    for (int i = 0; i < count; i++) {
        printf("%-30s %-20s %-10d\n", library[i].title, library[i].author, library[i].year);
    }
}

void listBooksByAuthor() {
    char author[50];
    printf("Enter the author's name: ");
    scanf("%s", author);

    int found = 0;
    printf("%-30s %-20s %-10s\n", "Title", "Author", "Year");
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("%-30s %-20s %-10d\n", library[i].title, library[i].author, library[i].year);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found for author '%s'.\n", author);
    }
}

void countBooks() {
    printf("Total books in the library: %d\n", count);
}

int main() {
    int choice;
    do {
        printf("\n--- Library Management System ---\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
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
                listBooksByAuthor();
                break;
            case 4:
                countBooks();
                break;
            case 5:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

