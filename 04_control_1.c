#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 char a;
	 
	 printf("input a char  : ");
	 scanf("%c", &a);
	 
	 if ('A'<=a&&a<='Z')	  
	  { 
	  printf("�빮���Դϴ�");
	    
	   }
	   else if( 'a'<=a&&a<='z')  
       {
       	printf("�ҹ����Դϴ�");
       }   
      else if ('0'<=a && a<='9') 
      {
	   printf(" �����Դϴ�");    
	
	   }
       
      else {
      	printf("��Ÿ�����Դϴ�");
	  }
	   
	   
	       
	return 0;
}
