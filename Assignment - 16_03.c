/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
   
void EvenOddSum(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++) {
        
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }

    printf("Even index positions sum  : %d\n",odd);
    printf("Odd index positions sum  : %d",even);
}
int main()
{
    int arr[10],i;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter array elements\n");
    for(i = 0; i < 10; i++)
          scanf("%d",&arr[i]);
          
    EvenOddSum(arr, n);
   
getch();
}
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/