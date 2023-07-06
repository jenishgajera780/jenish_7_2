// Q6 write a program to print the below pattern using nested for loop.

/*
output :
5 4 3 2 1
  5 4 3 2
    5 3 2
      5 4
	5
*/

#include<stdio.h>
#include<conio.h>

void main(){

int j,i,e;
clrscr();

for(i=1;i<=5;i++){
for(e=1;e<=i;e++){
printf(" ");}
for(j=5;j>=i;j--){
printf("%d",j);}
printf("\n");}

getch();
}

