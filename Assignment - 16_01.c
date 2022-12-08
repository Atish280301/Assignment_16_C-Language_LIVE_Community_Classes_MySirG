/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
   
    int arr[10],i, sum = 0;
    
    printf("Enter array elements\n");
    for(i = 0; i < 10; i++)
          scanf("%d",&arr[i]);
          
   
    for(i = 0; i < 10; i++)
          sum = sum + arr[i]; 
    
    
    printf("Sum of the array = %d\n",sum);
    
	getch();
}
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/