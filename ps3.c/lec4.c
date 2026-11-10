// #include <stdio.h>

// int main(){
//     // Problem: Print Happy Birthday 1 Lakh times
//     for(int i = 0; i < 100000; i++){
//         printf("Happy Birthday!\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int i = 0;
//     while(i<4){
//         printf("Happy Birthday!\n");
//         // i = i + 1;
//         i++;
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int i = 0;
//     while (i<10) {
//         printf("The value of i is %d \n", i); 
//         i++;
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int i = 0;
//     while (2<10) {
//         printf("The value of i is %d \n", i); 
//         i++;
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     /*
//   Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
//  counter is initialized to 0.
//    */

//     int i = 0;
//     while(i<=20){
//         if(i>=10){
//             printf("The value of i is %d\n", i);
//         }
//         i++;
//     }

//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int i = 5;
//     printf("The value of i is %d\n", i);

//     i = i + 5; // 10
//     printf("The value of i is %d\n", i);

//     printf("The value of i is %d\n", i++); // 10
//     printf("The value of i is %d\n", i); // 11
    

//     i +=2; // Same as i = i + 2;
//     printf("The value of i is %d\n", i); // 13

//     // i++ prints i first and then increments i (Post increment Operator)
//     // ++i increments i first and then prints i (Post increment Operator)


//     return 0;
// }




// #include <stdio.h>

// int main(){
//     int i = 0;
//     do{
//        printf("The value of i is %d\n", i);  
//        i++;
//     } while (i<4);
    
    
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int n, i=1;
//     scanf("%d", &n);
//     do{
//         printf("%d\n", i);
//         i++;
//     }while(i<=n);
    
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int n = 6;
//     for(int i =0;i<n;i++){
//         printf("The value of i is %d\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int n = 12;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main(){ 
//     int n = 12;
//     for (int i=n; i ; i--){
//         printf("%d\n",i); 
//     }
        
//     return 0;
// }




// #include <stdio.h>

// int main(){
//     for (int i = 0; i < 15; i++)
//     {
//         if(i==5){
//             // break; // exit the loop now!
//             continue; // skip this iteration now
//         }
//         printf("i is %d\n", i);
//     }

//     printf("For loop is done!");
    
//     return 0;
// }