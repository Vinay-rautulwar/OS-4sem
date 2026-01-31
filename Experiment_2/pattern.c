#include <stdio.h>

int main() {
   int i, j, rows;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   // Outer loop for rows
   for (i = 1; i <= rows; ++i) {
      // Inner loop for columns (prints stars)
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      // Move to the next line after each row
      printf("\n");
   }

   return 0;
}

