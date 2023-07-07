Q.10 Write a Program to print the below pattern using nested for loop.
          
*/          
  output :
            1
          1 2 3
        1 2 3 3 4 
      1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8 9
*/


#include <stdio.h>
#include <conio.h>

void main(){
    int i,j,e = 5;
clrscr();

for (int i = 0; i < rows; i++) {
for (int j = 0; j < 2 * (rows - i) - 1; j++) {
printf(" ");}
for (int k = 0; k < 2 * i + 1; k++) {
printf("%d ", k + 1);}
printf("\n");}
    getch();
}
