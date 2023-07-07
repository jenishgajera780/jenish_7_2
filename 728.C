
Q.8 Write a Program to print the below pattern using nested for loop.
 
/*

output ;

1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1


*/

#include<stdio.h>
#include<conio.h>

void main(){
int i, j, k, e;
    
    clrscr();
    
    printf("Enter the value for e : ");
    
scanf("%d",&e);
 
    for(i=1;i<=e;i++){
    for(j=1;j<=(e+1)-i;j++){
printf("*");}
    for(k=1;k<i;k++){
printf("  ");}
    for(j=1;j<=(n+1)-i;j++){
printf("*");}
printf("\n");}
    for(i=2;i<=e;i++){
    for(j=1;j<=i;j++){
printf("*");}
    for(k=1;k<=e-i;k++){
printf("  ");}
    for(j=1;j<=i;j++){
printf("*");}
printf("\n");}
 
    getch();
}
