// #include <stdio.h>
// #include <string.h>

// struct employee
// {
// int code; // This declares a new user defined data type!
// float salary;
// char name[10];
// }; // semicolon is important

// int main(){
//     struct employee e1, e2;
//     e1.code = 4511;
//     strcpy(e1.name, "Harry");
//     e1.salary = 54.44;

//     printf("%d %f %s", e1.code, e1.salary, e1.name);
    
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// struct employee
// {
// int code; // This declares a new user defined data type!
// float salary;
// char name[10];
// }; // semicolon is important

// int main(){
//     struct employee e1, e2, e3;

//     printf("Enter the value of code\n");
//     scanf("%d", &e1.code);

//     printf("Enter the value of salary\n");
//     scanf("%f", &e1.salary);

//     printf("Enter the value of name\n");
//     scanf("%s", &e1.name);
//     printf("%d %f %s\n", e1.code, e1.salary, e1.name);


//     printf("Enter the value of code\n");
//     scanf("%d", &e2.code);

//     printf("Enter the value of salary\n");
//     scanf("%f", &e2.salary);

//     printf("Enter the value of name\n");
//     scanf("%s", &e2.name);
//     printf("%d %f %s\n", e2.code, e2.salary, e2.name);



//     printf("Enter the value of code\n");
//     scanf("%d", &e3.code);

//     printf("Enter the value of salary\n");
//     scanf("%f", &e3.salary);

//     printf("Enter the value of name\n");
//     scanf("%s", &e3.name);
//     printf("%d %f %s\n", e3.code, e3.salary, e3.name);
    
//     return 0;
// }




// #include <stdio.h>

// struct employee
// {
//     int code; // This declares a new user defined data type!
//     float salary;
//     char name[10];
// }; // semicolon is important

// int main()
// {
//     struct employee facebook[100]; // an array of structures
//     // we can access the data using:
//     facebook[0].code = 100;
//     facebook[1].code = 77;
//     struct employee harry = {100, 71.22, "harry"};
//     printf("%d %f %s", harry.code, harry.salary, harry.name);
//     return 0;
// }




// #include <stdio.h>

// struct employee
// {
//     int code; // This declares a new user defined data type!
//     float salary;
//     char name[10];
// }; // semicolon is important

// int main()
// {
//     struct employee e1;
//     e1.code = 56;
//     struct employee *ptr;
//     ptr = &e1;
//     // now we can print structure elements using:
//     // printf("%d", (*ptr).code);
//     printf("%d", ptr->code); // Exactly same as  (*ptr).code

//     return 0;
// }





// #include <stdio.h>
// #include <string.h>

// struct employee
// {
//     int code; // This declares a new user defined data type!
//     float salary;
//     char name[10];
// }; // semicolon is important

// void show(struct employee e); // function prototype


// void show(struct employee e){
//     printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
// }

// int main()
// {
//     struct employee e1;
//     e1.code = 4511;
//     strcpy(e1.name, "Harry");
//     e1.salary = 54.44;
//     show(e1);


//     return 0;
// }




#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp; // semicolon is important

int main(){
    // typedef int harry;
    // int a = 88;
    // printf("The value of a is %d \n", a);

    // typedef struct employee Emp;

    Emp e1;
    Emp* ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);
    
    return 0;
}