#include<stdio.h>
int main(){
int numero;                              //numero de cadastro 
                                                
  printf("digite um dos numeros que cadastrou \n\n ");
    scanf("%i",&numero);
     
	  while(numero<12 || numero>20){
        printf("entrada invalida (: \n");
	    printf("digite novamente \n");  
		  scanf("%i",&numero);  
	     if(numero>11 && numero <21){
		 printf("entrada concedida \n\n :)");
		 break;
		 
		 }
	 
	 }


return 0;
}
