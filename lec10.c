// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("harry.txt", "r");
//     int num;
//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d \n", num);

//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d \n", num);

//     fclose(ptr);
    
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("harry2.txt", "r");

//     if(ptr == NULL){
//         printf("The file does not exist sorry! \n");
        
//     }
//     else{

//     int num;
//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d \n", num);

//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d \n", num);

//     fclose(ptr);
    
//     }
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("harry.txt", "a");
//     int num = 432;
//     fprintf(fptr, "%d", num);
//     fclose(fptr);

//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("harry.txt", "a");
//     // char c = fgetc(ptr); // used to read a character from file
//     // printf("%c", c);
//     fputc('c', ptr);
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     char ch;
//     FILE *ptr;
//     ptr = fopen("harry.txt", "r");
//     while (1)
//     {
//         ch = fgetc(ptr); 
//         printf("%c", ch);
//         // when all the content of a file has been read break
//         if (ch == EOF)
//         {
//             break;
//         }
//     }
//         return 0;
// }



The number is: 432432

432c

