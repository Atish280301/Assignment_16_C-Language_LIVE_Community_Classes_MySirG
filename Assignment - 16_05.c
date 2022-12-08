/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/

#include<stdio.h>    
#include<conio.h>   
int main()    
{    
        
   int arr[10];
    
    printf("Enter array elements\n");
    for(int i = 0; i < 10; i++)
          scanf("%d",&arr[i]);

    int length = sizeof(arr)/sizeof(arr[0]);    
        
        
    int min = arr[0];    
        
      
    for (int i = 0; i < length; i++) {     
            
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array: %d\n", min);    
getch();    
}
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/