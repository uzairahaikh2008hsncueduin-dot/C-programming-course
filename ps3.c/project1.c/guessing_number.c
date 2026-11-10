// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     //initialize random generator
//     srand(time(0));

//     //generate a random number between 1 and 100
//     int number = rand() % 100 + 1;
//     int no_of_guesses = 0;
//     int guessed_number;

//     // print the random number
//     // printf("The random Number is: %d\n", randomNumber);

//     do
//     {
//         printf("Guess the number\n");
//         scanf("%d", &guessed_number);
//         if (guessed_number > number)
//         {
//             printf("Lower number please!\n");
//         }
//         else if (guessed_number < number)
//         {
//             printf("Higher number please!\n");
//         }
//         else
//         {
//             printf("Congrats! You guessed the number in %d attempts\n", no_of_guesses);
//         }
//         no_of_guesses++;
//     } while (guessed_number != number);
    
//     return 0;
// }




Doubly_Linked_List_Program_Notes (2).pdf
PDF
The program given in the PDF contains all ten operations. You are NOT required to submit all of them. Select ANY FOUR operations from the list below and modify the program so that only those four operations remain. The modified program must compile and run without a single error.

List of operations:


insertAtBeginning() — adds a new node before the current first node

insertAtEnd() — adds a new node after the current last node

insertAtPosition() — adds a new node at the position given by the user

deleteFromBeginning() — removes the first node and moves head forward

deleteFromEnd() — removes the last node of the list

deleteByValue() — searches a value and removes that node

search() — finds a value and reports its position

displayForward() — prints the list from first node to last node

displayBackward() — prints the list from last node to first node

countNodes() — counts how many nodes are present


CHANGES YOU MUST MAKE IN THE CODE


Keep struct Node, the head pointer and createNode() as they are — every operation depends on them.

Delete the complete function definitions of the six operations you have NOT selected. Deleting only the function call is not enough.

Remove the matching case blocks of those operations from the switch statement in main().

Renumber your menu: the four selected operations become 1, 2, 3, 4 and Exit becomes 5. The numbers printed by printf() and the numbers written in the case labels must be the same, otherwise the wrong function will be called.

Remove the variables that are no longer used. For example, pos is required only by insertAtPosition(); if that operation is dropped, the variable should also go.

Compile using: gcc yourfile.c -o dll and run using: ./dll
There must be no error and no warning before you show the output.


POINTS TO REMEMBER WHILE SELECTING
At least ONE INSERT operation must be selected. Without it the list stays empty and no other operation can show anything.
Select displayForward() or displayBackward() as well, so that the effect of your other operations is visible on the screen.
search() and deleteByValue() read a value from the user — do not forget the printf() prompt and the scanf() before calling them.
Never remove the free() statement from a delete operation, otherwise the memory is not released.
displayBackward() works only because of the prev pointer, so the prev links must still be updated correctly in whichever insert operation you keep.
WHAT TO SUBMIT


The modified .c file (your four operations only).

A table recording: Sr. No. / Operation selected / New menu number / Input given / Output obtained.

make this assignment for me
…

Your assignment is ready. I selected these four operations:

insertAtBeginning()

insertAtEnd()

deleteFromBeginning()

displayForward()

This selection satisfies all the assignment requirements.

1. Download your files
Modified C program

doubly_linked_list_four_ops.c

Compiled
Download C source file

Assignment record

Word document with selection table, sample output and conclusion

Download assignment record

2. Compilation verification
Successfully compiled – no errors or warnings
Command used:

gcc -std=c11 -Wall -Wextra -Wpedantic doubly_linked_list_four_ops.c -o dll

Run using:

./dll

3. Sample output
10 inserted at the beginning.
20 inserted at the end.
30 inserted at the end.

Forward list:
NULL <-> 10 <-> 20 <-> 30 <-> NULL

Deleted node: 10

Forward list:
NULL <-> 20 <-> 30 <-> NULL

Program ended. Thank you!
4. What to submit

Modified .c source file

Four selected operations only

Renumbered menu (1–4, Exit 5)

Record table with inputs and outputs

Sample execution output

Compilation verified without warnings
Important: Take a screenshot of your own terminal running the program and attach it if your teacher requires actual execution screenshots.


doubly_linked_list_four_ops.c
Code

doubly_linked_list_assignment_record.docx
Word
#include <stdio.h>
#include <stdlib.h>

/* Structure of one node in the doubly linked list */
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

/* head always points to the first node of the list */
struct Node *head = NULL;

/* Create a new node and return its address */
struct Node *createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

/* OPERATION 1: Insert a node at the beginning */
void insertAtBeginning(int value) {
    struct Node *newNode = createNode(value);

    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;

    printf("%d inserted at the beginning.\n", value);
}

/* OPERATION 2: Insert a node at the end */
void insertAtEnd(int value) {
    struct Node *newNode = createNode(value);
    struct Node *temp = head;

    if (head == NULL) {
        head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("%d inserted at the end.\n", value);
}

/* OPERATION 3: Delete the first node */
void deleteFromBeginning(void) {
    struct Node *temp;

    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

/* OPERATION 4: Display the list from first node to last node */
void displayForward(void) {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Forward list: NULL <-> ");
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != NULL) {
            printf(" <-> ");
        }
    }





