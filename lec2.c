
//     #include <stdio.h>

// int main()
// {
//     int i = 10; // Declare and initialize 'i' with 10
//     int j = i;
//     int a = 2, b = 3, c = 4, d = 5;
//     // %d is called format specifier
//     // %d is for int, %f is for float and %c is for char
//     printf("The value of i is %d and value of j is %d\n", i, j );
//     printf("The value of a is %d and value of b is %d\n", a, b );
//     printf("The value of c is %d and value of d is %d\n", c, d );
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a = 5;
//     int b = 3;
//     int c = a + b;
//     printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
//     // Modulus operator is used to get the remainder
//     printf("The remainder when a is divided by b is: %d\n", a % b);

//     // This does not work for exponentiation in c
//     // int d = a^b;

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     float a = 9.0;
//     int b = 2;
//     float c = a / b;
//     int d = 6.7;
//     printf("The value of a/b is %f\n", c);
//     printf("The value of d is %d", d);
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int a = 3;
//     int b = 6;
//     int c = 9;

//     printf("The value is %d\n", a*b/c + 7);
//     printf("The value is %d", 3*b/2*c + 7*a);
//     // 3*b/2*c + 7*a
//     // 3*b/2*c + 21
//     // 18/2*c + 21
//         // 9*c + 21
//     // 81 + 21
//     // 102
//     return 0;
// }




#include <stdio.h>

int main(){
    int n = 45;
    float m = 32.23;
    float a =3.14;
    int b = 5;
b = (int)a; // convert the data type to int
printf("%d\n", b);
    n = (int) m; // convert the data type to int
    printf("%d\n", n);
    return 0;
}