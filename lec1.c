#include<stdio.h>
/*
This is a multiline comment
*/
int main(){
    int a; // Variable initialization
    a =5; // Variable declaration
    float b =3.14; // Variable declaration and initialization
    char d = 'A'; // Variable declaration and initialization

     printf("The value of a is %d\n", a); // Output the value of a
    printf("The value of b is %f\n",b); // Output the value of b
    printf("%c\n",d); // Output the value of d

    printf("Size of int:%zu bytes\n", sizeof(a)); // Output the size of int
    printf("Size of float:%zu bytes\n", sizeof(b)); // Output the size of float
    printf("Size of char:%zu bytes\n", sizeof(d)); // Output the size of char
    printf("Size of double:%zu bytes\n", sizeof(double)); // Output the size of double


    //Rules for naming the variables 
    int harry;
    int Harry;
    int harry_good;
    return 0;
}
// #include<stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a); // Input the value of a
//     printf("The value of a is %d\n", a);
//     return 0;
// }

//Escape sequences in C
// \n  (represents a new line)
// \t  (represents a tab space)
// \\  (represents a backslash)
// \'  (represents a single quote)
// \"  (represents a double quote)
// etc