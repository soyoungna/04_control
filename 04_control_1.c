#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int answer=38;
	 int c;
	 

	 do 
	 {
	 
	 printf("Guess a number ");
	 scanf ("%d",&c);
	 
	 	if(c>answer)
	 	{
	 	printf("low!");
		 }
	 	
	 	if(c<answer)
	 	{
		 printf("high!");
		 }
	 	
	 }	 while (c!=answer);
	 
	 printf("Congratuation!");
	 
       
     
	  
	   
	   
	       
	return 0;
}
