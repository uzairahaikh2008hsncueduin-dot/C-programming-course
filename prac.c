//Excercise 1
// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int length =10, breadth =4;
//     printf("The area of rectangle is: %d", length * breadth);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int length, breadth;
//     printf("Enter length\n");
//     scanf ("%d", &length);
//      printf("Enter breadth\n");
//     scanf ("%d", &breadth);
//     printf("The area of rectangle is: %d", length * breadth);
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int r =10;
//     int height =5;
//     printf("The area of a circle with radius %d is %f\n", r, 3.14 * r * r);
//     printf("The volume of a cylinder with radius %d and height %d is %f\n", r, height, 3.14 * r * r * height);
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     float c = 37.0;
//     float f = ((9.0/5.0) * c)   + 32;
   
//     printf("The value in Fahrenheit is: %f\n", f);
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     float p = 34.1;
//     int r = 8;
//     int t =5;
//     printf("The value of simple intrest is %f\n", ((p*r*t)/100));
//     return 0;
// }


//Excersise 2
// #include<stdio.h>

// int main(){
//     float a = 3.0/8-2;
//     printf("The value of a is %f",a);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int a =3349895;
//     printf("The value of a%97 is %d", a%97);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int x =2,y=3,z=3,k=1;
//     float a = 3*x/y-z+k;
//     printf("The value of a is %f",a);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int marks1,marks2,marks3;
//     printf("Enter marks1\n");
//     scanf("%d",&marks1);
//     printf("Enter marks2\n");
//     scanf("%d",&marks2);
//     printf("Enter marks3\n");
//     scanf("%d", &marks3);

//     if (marks1<33 || marks2<33 || marks3<33){
//         printf("You are fail due to less marks\n");
//     }
//     else if((marks1+marks2+marks3)/3<40){
//         printf("You are fail due to less percentage\n");
//     }
//     else{
//         printf("You are pass\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int income;
//     float tax=0; 
//     printf("Enter income: \n");
//     scanf("%d", &income);
//     if(income<=250000){
//         tax = 0;
//     }
//     else if(income>250000 && income<=500000){
//         tax = 0.05 * (income - 250000);
//     }
//     else if(income>500000 && income<=1000000){
//         tax = 0.05 * (500000 - 250000) + 0.2 * (income- 500000);
//     }
//     else {
//         tax = 0.05 * (500000 - 250000) + 0.2 * (1000000- 500000) + 0.3 * (income - 1000000);
//     }
//     printf("The total tax you need to pay is %.3f", tax);
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int year;
//     printf("Enter year\n");
//     scanf("%d",&year);
//     if(year%4==0 && year%100!=0 || year%400==0){
//         printf("%d is a leap year  \n", year);

//     }
//     else{
//         printf("%d is not a leap year  \n", year);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     char ch = 'A';
//     printf("The character is %c\n", ch);
//     printf("The value of character is %d\n", ch);
//     // 97, 122
//     if(ch >= 97 && ch<=122){
//         printf("This character is lowercase\n");
//     }
//     else{
//          printf("This character not lowecase \n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int a=4, b=2, c=116, d=32;
//     if(a>b && a>c && a>d){
//         printf("The greatest of all is %d", a);
//     }
//     else if(b>a && b>c && b>d){
//         printf("The greatest of all is %d", b);
//     }
//     else if(c>a && c>b && c>d){
//         printf("The greatest of all is %d", c);
//     }
//     else if(d>a && d>c && d>b){
//         printf("The greatest of all is %d", d);
//     }
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n = 10;
//     for (int i = 0; i < 11; i++)
//     {
//         printf("%d x %d = %d\n", n, i, n*i);
//     }
    
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number\n");
//     scanf("%d",&n);
//     for (int i = 10; i >= 1; i--)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n =1;
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += n;
//         n++;
//     }
//     // do{
//     //     sum += n;
//     //     n++;
//     // }while (n<=10);
//     // while (n<=10)
//     // {
//     //     sum += n;
//     //     n++;
//     // }
//     printf("The sum is %d", sum);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     // USING DO WHILE LOOP:
//     // int i = 1;
//     // int sum = 0;
//     // do{
//     //     sum += i;
//     //     i++;
//     // } while (i <= 10);

//     // USING FOR LOOP:
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
    


//     printf("The sum of first 10 natural numbers is %d", sum);
//     return 0;
// }






// #include<stdio.h>

// int main(){
//     int n =8;
//     for (int i = 0; i < 11; i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);  
//     }
    
//     return 0;
// }




// #include <stdio.h>

// int main(){
//     // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
//     // 5! = 1 X 2 X 3 X 4 X 5
//     // n! = 1 X 2 X 3 X 4 X 5 ..... X n
//     // 0! = 1
//     int product=2;
//     int n = 2;
//     for (int i = 1; i <= n; i++)
//     {
//         product *=i;
//     }
//     printf("The factorial is %d", product);
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
//     // 5! = 1 X 2 X 3 X 4 X 5
//     // n! = 1 X 2 X 3 X 4 X 5 ..... X n
//     // 0! = 1
//     int i = 1;
//     int product=1;
//     int n = 5;
//     while(i<=n)
//     {
//         product *=i;
//         i++;
//     }
//     printf("The factorial of %d is %d", n, product);
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int n = 7;
//     int not_prime = 0;

//     if (n == 0 || n == 1)
//     {
//         not_prime = 1;
//     }
//     else
//     {

//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 not_prime = 1;
//                 break;
//             }
//         }
//     }
//     if (not_prime)
//     {
//         printf("%d is not prime\n", n);
//     }
//     else
//     {
//         printf("%d is prime\n", n);
//     }

//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int n = 4;
//     int not_prime = 0;

//     if (n == 0 || n == 1)
//     {
//         not_prime = 1;
//     }
//     else
//     {
//         int i =2;
//         // while (i < n)
//         // {
//         //     if (n % i == 0 && n != 2)
//         //     {
//         //         not_prime = 1;
//         //         break;
//         //     }
//         //     i++;
//         // }

//         do{
//             if (n % i == 0 && n != 2)
//             {
//                 not_prime = 1;
//                 break;
//             }
//             i++;
//         }while (i < n);
//     }
//     if (not_prime)
//     {
//         printf("%d is not prime\n", n);
//     }
//     else
//     {
//         printf("%d is prime\n", n);
//     }

//     return 0;
// }




// #include<stdio.h>
// float average(int a, int b, int c){
//     return (a+b+c)/3.0;
// }
// int main(){
//     int a = 3, b = 4, c = 5;
//     printf("The average of a, b and c is %f", average(a,b,c));
//     return 0;
// }



// #include<stdio.h>
// float c2f(float c){
//     return ((9*c)/5) + 32;
// }
// int main(){
//     float c = 0;
//     printf("The temperature in Fahrenheit is %f", c2f(c));
//     return 0;
// }


// #include <stdio.h>


// float force(float);

// float force(float mass){
//     return mass*9.8;
// }

// int main(){
//     int m = 45;
//     printf("The value of force is %f\n", force(m));
//     return 0;
// }



// #include <stdio.h>

// // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// // fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

// int fibonacci(int);

// int fibonacci(int n){
//     if(n == 1 || n==2){
//         return n-1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
 
// int main(){
//     int n = 7;
//     printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int a = 4; 
//     printf("%d %d %d \n", a,++a, a++);
//     // 6 6 4
//     // 4 5 5
//     return 0;
// }



// #include <stdio.h>


// int sum_natural(int);

// int sum_natural(int n){
//     if(n==1){
//         return 1;
//     }
//     // sum_natural(n) = 1 + 2 + 3 + 4 + 5 + ... n-1 + n;
//     // sum_natural(n) = sum(n-1) + n;
//     return sum_natural(n-1) + n;

// }
// int main(){
//     printf("The sum of first 5 natural numbers is %d", sum_natural(5));
//     return 0;
// }



#include<stdio.h>

int main(){
    int n =3;
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<2*i+1;j++){
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}