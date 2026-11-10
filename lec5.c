// #include <stdio.h>

// // Function prototype
// int sum(int, int);


// // Function definition
// int sum(int x, int y){
//     // printf("The sum is %d\n", x+y);
//     return x+y;
// }

// int main(){
//     int a = 1;
//     int b = 2;

//     // int c = a + b;
//     // printf("The sum is %d\n", c);
//     int c  = sum(a,b); // Function call
//     printf("%d\n", c);

//     int a1 = 12;
//     int b1 = 23;

//     // int c1 = a1 + b1;
//     // printf("The sum is %d\n", c1);
//     int c1 = sum(a1,b1); // Function call
//     printf("%d\n", c1);

//     int a2 = 2;
//     int b2 = 27;

//     // int c2 = a2 + b2;
//     // printf("The sum is %d\n", c2);
//     int c3 = sum(a2, b2); // Function call
//     printf("%d\n", c3);

//     return 0;
// }



// #include <stdio.h>

// void good_morning();
// void good_afternoon();
// void good_evening();


// void good_morning(){
//     printf("good morning\n");
// }

// void good_afternoon(){
//     printf("good afternoon\n");
// }

// void good_evening(){
//     printf("good evening\n");
// }

// int main(){
//     good_morning();
//     good_afternoon();
//     good_evening();
//     return 0;
// }



// #include <stdio.h>

// int change(int a);

// int change(int a) {
//     a = 77; // Misnomer
//     return 0;
// }

// int main(){
//     int b=22;
//     change(b); // The value of b remains 22
//     printf("b is %d", b); 

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main(){
//     int a = 5;
//     printf("The area of this square is %f\n", pow(a, 2));
//     return 0;
// }







#include <stdio.h>

int factorial(int);
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
    //  = 1 x 2 X 3 X .... X n-1

int factorial(int n){ 
    if(n == 1 || n == 0){ // Base condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);
}

int main(){
    int a = 6;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}