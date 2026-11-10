l#include <stdio.h>

int main(){
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}

// #include<stdio.h>

// int main(){
//     int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,13};

//     for (int i = 0; i < 12; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }