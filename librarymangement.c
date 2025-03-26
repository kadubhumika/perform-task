#include <stdio.h>
#include <stdlib.h>

void library(int **arr, int bookno, int *n, char option) {
    int i, j, found = 0;

    if (option == 'i') {  // Insert a book
        *arr = (int *)realloc(*arr, (*n + 1) * sizeof(int));
        if (*arr == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        (*arr)[*n] = bookno;
        (*n)++;
        printf("Book no %d is inserted\n", bookno);
    } 

    else if (option == 'r') {  // Remove a book
        for (i = 0; i < *n; i++) {
            if ((*arr)[i] == bookno) {
                found = 1;
                break;
            }
        }
        if (found) {
            for (j = i; j < *n - 1; j++) {
                (*arr)[j] = (*arr)[j + 1];  // Shift elements left
            }
            *arr = (int *)realloc(*arr, (*n - 1) * sizeof(int));
            (*n)--;
            printf("Book no %d removed from shelf\n", bookno);
        } else {
            printf("Book no not found\n");
        }
    } 

    else if (option == 's') {  // Search for a book
        for (i = 0; i < *n; i++) {
            if ((*arr)[i] == bookno) {
                printf("Your book is found\n");
                return;
            }
        }
        printf("Book not found\n");
    }
}

int main() {
    int n, bookno;
    char option;
    
    printf("Enter number of books: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter book numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nEnter operation: (i - insert, r - remove, s - search, q - quit): ");
        scanf(" %c", &option);

        if (option == 'q') {
            break;
        }

        printf("Enter book number: ");
        scanf("%d", &bookno);

        library(&arr, bookno, &n, option);
    }

    free(arr);
    return 0;
}
