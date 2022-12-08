/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main() {
   int arr[10],i, sum = 0;
   float avg;;
    
    printf("Enter array elements\n");
    for(i = 0; i < 10; i++)
        scanf("%d",&arr[i]);
   

   sum = avg = 0;
   
   for(i = 0; i < 10; i++) {
      sum = sum + arr[i];
   }
   
   avg = (float)sum / i;
   printf("Average of array values is %.2f", avg);   
   
	getch();
}
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/