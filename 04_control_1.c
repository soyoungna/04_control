#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int i;
	 int a; //절댓값을 저장하는 변 수 
	 
	 printf("정수하나를 입력하시오  : ");
	 scanf("%d", &i);
	 
	 if( i>0 )
	   {
	    a=i;
	   }
	   else if( i<0 )  
       {
       	a=-i;
       }   
       printf("절댓값은%i 입니다.\n", a);
	   
	       
	return 0;
}
