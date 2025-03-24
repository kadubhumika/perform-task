//program for memory allocation , insertion , deleton , searching 
#include <stdio.h>
#include <stdlib.h>


void performOperation(int **arr, int *n, int element, char op) {
    int i, found = 0;

    if (op == 'i') { 
        *arr = (int *)realloc(*arr, (*n + 1) * sizeof(int)); 
        if (*arr == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }
        (*arr)[*n] = element; 
        (*n)++;
        printf("Element %d inserted.\n", element);

    } else if (op == 'd') { 
        for (i = 0; i < *n; i++) {
            if ((*arr)[i] == element) {
                found = 1;
                break;
            }
        }
        if (found) {  
            for (int j = i; j < *n - 1; j++) {
                (*arr)[j] = (*arr)[j + 1];
            }
            *arr = (int *)realloc(*arr, (*n - 1) * sizeof(int)); 
            (*n)--;
            printf("Element %d deleted.\n", element);
        } else {
            printf("Element %d not found.\n", element);
        }

    } else if (op == 's') {  // Searching
        for (i = 0; i < *n; i++) {
            if ((*arr)[i] == element) {
                printf("Yes, key %d found at index %d.\n", element, i);
                return;
            }
        }
        printf("No, key %d not found.\n", element);
    } else {
        printf("Invalid operation.\n");
    }
}

// Function to display array elements
void displayArray(int *arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, element;
    char operation;

    printf("Enter initial array length: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nChoose operation: (i) Insert, (d) Delete, (s) Search, (q) Quit: ");
        scanf(" %c", &operation);

        if (operation == 'q') {
            break;
        }

        printf("Enter element: ");
        scanf("%d", &element);

        performOperation(&arr, &n, element, operation);
        displayArray(arr, n);
    }

    free(arr);
    return 0;
}




