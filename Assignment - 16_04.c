/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int greatest;
    printf("Enter ten values:");

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    greatest = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > greatest) {
        greatest = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/