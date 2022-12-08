/*Assignment - 16 C Language LIVE Community Classes MySirG*/
/*12. Write a program in C to find the transpose of a given matrix.*/

#include <stdio.h>
int main(){
   int m, n, i, j, matrix[10][10], transpose[10][10];
   printf("Enter rows and columns :");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
   printf("Transpose of the matrix:");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
      printf("");
   }
   return 0;
}
/*Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/