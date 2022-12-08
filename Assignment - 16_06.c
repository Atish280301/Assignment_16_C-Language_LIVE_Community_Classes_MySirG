/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*6. Write a program to sort elements of an array of size 10. Take array values from the
user.*/
#include<stdio.h>
#include<conio.h>
int main (){
   int num[10];
   int i, j, a, n;

   printf("Enter the elements: \n");
   for (i = 0; i < 10; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < 10; ++i){
      for (j = i + 1; j < 10; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:");
   for (i = 0; i < 10; ++i){
      printf("%d\n", num[i]);
   }
   getch();
}
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/