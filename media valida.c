#include<stdio.h>
int main(){
   float n;           //media valida

  printf("digite a nota \n");
scanf("%f",&n);
       
	     while(n<0||n>10){
	     printf("nota invalida \n");
	     printf("digite a nota novamente \n");
	     scanf("%f",&n);
	     
		 if(n>=0 && n<11){
		 printf("obigado :) \n");
		 break;
		 }
	    
	   }    
    
    
    
    
return 0;
}
