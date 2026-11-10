// #include<stdio.h>

// int main(){
//     float c = 37.0,f;

//     f =((9.0/5.0)*c) +32;
//     printf("The value in fahrenheit is %f\n",f);
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_DEPT 30

// Structure representing an Employee in the tech company
typedef struct {
    int id;
    char name[MAX_NAME];
    char department[MAX_DEPT];
    float salary;
} Employee;

// Function prototypes to manage clean control flow
void addEmployee(Employee *empList, int *count);
void displayEmployees(const Employee *empList, int count);
void calculatePayroll(const Employee *empList, int count);
void findHighestPaid(const Employee *empList, int count);

int main() {
    int capacity = 10; // Max initial database size
    int empCount = 0;
    int choice;

    // Allocate memory dynamically for the database
    Employee *companyDB = (Employee *)malloc(capacity * sizeof(Employee));
    if (companyDB == NULL) {
        printf("System Error: Memory allocation failed!\n");
        return 1;
    }

    printf("=== Welcome to the Tech Corp HR Management System ===\n");

    // Application Control Loop
    while (1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add New Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Calculate Total Payroll Expenses\n");
        printf("4. Find Highest Paid Tech Specialist\n");
        printf("5. Exit System\n");
        printf("Enter your choice (1-5): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type. Exiting.\n");
            break;
        }

        if (choice == 5) {
            printf("Shutting down system. Data cleared from RAM.\n");
            break;
        }

        switch (choice) {
            case 1:
                if (empCount < capacity) {
                    addEmployee(companyDB, &empCount);
                } else {
                    printf("Database Full! Upgrade capacity infrastructure.\n");
                }
                break;
            case 2:
                displayEmployees(companyDB, empCount);
                break;
            case 3:
                calculatePayroll(companyDB, empCount);
                break;
            case 4:
                findHighestPaid(companyDB, empCount);
                break;
            default:
                printf("Invalid selection! Please enter a number between 1 and 5.\n");
        }
    }

    // Clean up allocated heap memory before exit
    free(companyDB);
    return 0;
}

// Function to collect user input and register a new staff member
void addEmployee(Employee *empList, int *count) {
    printf("\n[Registration] Enter Employee ID: ");
    scanf("%d", &empList[*count].id);
    getchar(); // Clear trailing newline character from buffer

    printf("[Registration] Enter Full Name: ");
    fgets(empList[*count].name, MAX_NAME, stdin);
    empList[*count].name[strcspn(empList[*count].name, "\n")] = 0; // Strip newline

    printf("[Registration] Enter Department (e.g., Dev, QA, DevOps): ");
    fgets(empList[*count].department, MAX_DEPT, stdin);
    empList[*count].department[strcspn(empList[*count].department, "\n")] = 0;

    printf("[Registration] Enter Annual Salary ($): ");
    scanf("%f", &empList[*count].salary);

    printf("Success: Registered %s cleanly.\n", empList[*count].name);
    (*count)++;
}

// Function to safely print out all working entries
void displayEmployees(const Employee *empList, int count) {
    if (count == 0) {
        printf("\nNotice: The employee database is currently empty.\n");
        return;
    }
    printf("\n================ Active Tech Corp Roster ================\n");
    printf("%-5s | %-20s | %-15s | %-10s\n", "ID", "Name", "Department", "Salary");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-5d | %-20s | %-15s | $%-9.2f\n", 
               empList[i].id, empList[i].name, empList[i].department, empList[i].salary);
    }
}

// Function calculating financial overhead
void calculatePayroll(const Employee *empList, int count) {
    float total = 0.0;
    for (int i = 0; i < count; i++) {
        total += empList[i].salary;
    }
    printf("\n[Finance] Total Corporate Payroll Budget Overhead: $%.2f\n", total);
}

// Function utilizing a linear search algorithm to find maximum element
void findHighestPaid(const Employee *empList, int count) {
    if (count == 0) {
        printf("\nNotice: No records available to evaluate compensation metrics.\n");
        return;
    }
    int maxIndex = 0;
    for (int i = 1; i < count; i++) {
        if (empList[i].salary > empList[maxIndex].salary) {
            maxIndex = i;
        }
    }
    printf("\n[Insights] Top Earning Talent: %s ($%.2f) in Dept: %s\n", 
           empList[maxIndex].name, empList[maxIndex].salary, empList[maxIndex].department);
}


















