// Q7 write a program to print the below pattern using nested for loop.
/*
1234554321
1234  4321
123    321
12      21
1        1
*/

#include<stdio.h>
#include<conio.h>

void main(){

int i,j,e;

clrscr();
for(i=1;i<=5;i++){
for(j=i;j<=5;j++){
printf("%d",j);}
printf("\n");}

// ___________________________________________________

for(i=5;i>=1;i--){
for(e=4;e>=i;e--){
printf(" ");}
for(j=i;j>=1;j--){
printf("%d",j);}
printf("\n");}
getch();
}