/*
*Program:To show the solution of Tower of Hanoi problem using recursive method. 
*Author:Dhiraj Dhungana
*Date:07/24/2014
*Ref:Data structure Using C and C++, chapter 3, page 145,146.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 void tower(int disk, char A, char C, char B)
 {
 	if(disk==1)
 	{
 		printf("\n%s %c %s %c","move disk 1 from peg",A,"to peg",C);
 		return ;
	}
	 	tower(disk-1,A,B,C);
		printf("\n%s %d %s %c %s %c","move disk",disk,"from peg",A,"to peg",C);
	 	tower(disk-1,B,C,A);
}
 
 int main()
 {
 	int num;
 	printf("enter the number of disk for first A.\n");
 	scanf("%d",&num);
 	tower(num,'A','C','B');
 }
 

