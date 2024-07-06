#include<stdio.h> 
int main() 
{ 
    int n ; 
    int arr[3][3] = { 
        {1,2,3}, 
        {7,6,5}, 
        {7,0,9} 
    };   
 
    int brr[3][3] = { 
        {1,4,5}, 
        {7,0,1}, 
        {0,8,1} 
    }; 
 
    int crr[3][3] = { 
        {0,0,0}, 
        {0,0,0}, 
        {0,0,0} 
    };     

     
    for(int  i = 0; i < 3; i++)  
    { 
         
        for (int  j= 0; j < 3; j++)  
        { 
            crr[i][j] = 0 ; 
            for (int  k = 0; k < 3; k++)  
            { 
                crr[i][j] = crr[i][j] +(arr[i][k] * brr[k][j]) ;  
                //  
            } 
        } 
    } 
 
    printf("\n the Mutiplication   \n"); 
    for(int  i = 0; i < 3; i++) 
    { 
        for (int  j= 0; j < 3; j++) 
        { 
 
            printf("%d",*(*(crr+i)+j)); 
        } 
        printf("\n"); 
    } 
 
 
    return 0 ; 
}
