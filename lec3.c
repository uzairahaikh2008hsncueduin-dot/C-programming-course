// #include <stdio.h>

// int main(){
//     int age = 15;

//     if(age>10){
//         printf("We are inside if\n");
//         printf("Your age is greater than 10\n");
//     }
//     if(age%5==0){
//         printf("We are inside another if\n");
//         printf("Your age is divisible by 50\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int age = 5;

//     if(age>10){
//         printf("We are inside if\n");
//         printf("Your age is greater than 10\n");
//     }
//     else{
//         printf("Your age is not greater than 10");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
    
//     if(1){
//         printf("This if is executed!\n");
//     }
//     if(2345){
//         printf("This if is also executed!\n");
//     }
//     if(2.74){
//         printf("This if is also executed!\n");
//     }
//     if('c'){
//         printf("This character inside if is also executed!\n");
//     }
//     if(0){
//         printf("I am zero - I am not executed\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int a=1; int b=1;
//     printf("The value of a and b is %d\n", a&&b);
//     printf("The value of a or b is %d\n", a||b);
//     printf("The value of not(a) is %d\n", !a);

//     if(a && b){
//         printf("both are true\n");
//     }
//     // is same as writing ....
//     if(a){
//         if(b){
//             printf("both are true");
//         }
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int age = 45;

//     if(age>60){
//         printf("You can drive and you are a senior citizen");
//     }
//     else if(age>40){
//         printf("You can drive and you are elder");
//     } 
//     else if(age>18){
//         printf("You can drive");
//     }
//     else{
//         printf("You cannot drive");
//     }


//     return 0;
// }


// #include <stdio.h>

// int main(){
//     // condition ? expression-if-true : expression-if-false
//     int a = 345;
//     int b= 345452;
//     a>b?printf("a is greater"):printf("b is greater");
// }



// #include <stdio.h>

// int main(){
//     int a;
//     printf("Enter a: ");
//     scanf("%d", &a);

//     switch(a){
//         case 1:
//             printf("You entered 1\n");
//             break;
//         case 2:
//             printf("You entered 2\n");
//             break;
//         case 3:
//             printf("You entered 3\n");
//             break;
//         case 4:
//             printf("You entered 4\n");
//             break;
//         default:
//             printf("Nothing matched");
//     }
//     return 0;
// }





// #include <stdio.h>

// int main(){
    /*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
    */
//    char grade;
//    int marks = 46;
//    if(marks<=100 && marks>=90){
//     grade = 'A';
//    }
//    else if(marks<=90 && marks>=80){
//     grade = 'B';
//    }
//    else if(marks<=80 && marks>70){
//     grade = 'C';
//    }
//    else if(marks<=70 && marks>=60){
//     grade = 'D';
//    }
//    else if(marks<=60 && marks>=50){
//     grade = 'E';
//    }
//    else{
//     grade = 'F';
//    }
//     return 0;
// }   