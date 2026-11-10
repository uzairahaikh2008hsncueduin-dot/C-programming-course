
// #include <stdio.h>

// int main(){
//     int marks[5];  

//     printf("Enter marks of 5 students\n");

//     // scanf("%d", &marks[0]);
//     // scanf("%d", &marks[1]);
//     // scanf("%d", &marks[2]);
//     // scanf("%d", &marks[3]);
//     // scanf("%d", &marks[4]);
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &marks[i]);
//     }

//       for (int i = 0; i < 5; i++)
//     {
//         printf("The value of marks at index %d is %d\n", i, marks[i]);
//     }
    
 
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int cgpa[] = {9, 8, 8};
//       for (int i = 0; i < 3; i++)
//     {
//         printf("The value of array at index %d is %d\n", i, cgpa[i]);
//     }
//     return 0;
// }




// #include <stdio.h>

// int main(){

//     // POINTER ARITHMETIC USING INTEGER POINTER
//     // int a = 5;
//     // int *ptr = &a;
//     // printf("The address of a is %u\n", &a);
//     // printf("The address of a is %u\n", ptr);
//     // ptr++;
//     // printf("The value of ptr is %u\n", ptr);

//     // POINTER ARITHMETIC USING CHARACTER POINTER
//     char a = 'A';
//     char *ptr = &a;
//     printf("The address of a is %u\n", &a);
//     printf("The address of a is %u\n", ptr);
//     ptr++;
//     printf("The value of ptr is %u\n", ptr);
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int marks[5];  

//     printf("Enter marks of 5 students\n");
 
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &marks[i]);
//     }

//       for (int i = 0; i < 5; i++)
//     {
//         printf("The address of marks at index %d is %u\n", i, &marks[i]);
//     }
    
 
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int marks[] = {12, 34, 53, 66};

//     int* ptr = &marks[0];
//     // int* ptr = marks; // Same as int* ptr = &marks[0];

//     for (int i = 0; i < 4; i++)
//     {
//         // printf("The marks at index %d is %d\n", i, marks[i]);
//         printf("The marks at index %d is %d\n", i, *ptr);
//         ptr++;
//     }
 
    
    

//     return 0;
// }




#include <stdio.h>

int main()
{
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}