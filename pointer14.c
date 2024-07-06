/*#include<stdio.h>


int main()
{
    int *p;
    p=fun();
    printf("%d",*p);
    printf("%d",p);
    return 0;
}

int* fun()
{
    int a=10;
    return(&a);
}
*/
#include <stdio.h> 
  
// Function returning pointer 
int* fun() 
{ 
    int A = 10; 
    return (&A); 
} 
  
// Driver Code 
int main() 
{ 
    // Declare a pointer 
    int* p; 
  
    // Function call 
    p = fun(); 
  
    printf("%p\n", p); 
    printf("%d\n", *p); 
    return 0; 
} 