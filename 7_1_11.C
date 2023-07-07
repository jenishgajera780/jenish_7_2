// Q.11 Write a Program to print the below pattern using nested for loop.

/*

         *         
       * * *                 
     * * * * *              
   * * * * * * *          
 * * * * * * * * *   

*/


#include <stdio.h>
#include <conio.h> 

void main(){

int i,j,k,e = 5;

for(int i = 0;i<e;i++){
for(int j = 0;j<2*(e-i)-1;j++){
printf(" ");}
        
for (int k = 0; k < 2 * i + 1; k++) {
    printf(" *");}
    printf("\n");}
    
    getch();
}
