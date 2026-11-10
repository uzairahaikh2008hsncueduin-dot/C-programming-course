#include <stdio.h>
#define MAX_SIZE 100

void traverse(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array overflow.\n");
        return size;
    }
    if (position < 0 || position > size) {
        printf("Invalid position.\n");
        return size;
    }
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    printf("Element inserted successfully.\n");
    return size + 1;
}

int delete(int arr[], int size, int position) {
    if (size == 0) {
        printf("Array underflow.\n");
        return size;
    }
    if (position < 0 || position >= size) {
        printf("Invalid position.\n");
        return size;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Element deleted successfully.\n");
    return size - 1;
}

void search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at index %d.\n", element, i);
            return;
        }
    }
    printf("Element not found in the array.\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0, choice, element, pos;
    
    while (1) {
        printf("\n1. Insert 2. Delete 3. Traverse 4. Search 5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter element and index position: ");
                scanf("%d %d", &element, &pos);
                size = insert(arr, size, element, pos);
                break;
            case 2:
                printf("Enter index position to delete: ");
                scanf("%d", &pos);
                size = delete(arr, size, pos);
                break;
            case 3:
                traverse(arr, size);
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &element);
                search(arr, size, element);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}