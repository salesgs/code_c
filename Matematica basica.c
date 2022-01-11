#include<stdio.h>
int main(){
    int op,n1,n2;
    
	printf("Para subtracao digite 0 \n");   
    printf("Para soma digite 1 \n");
	printf("Para Divisao digite 2 \n");
    printf("Para Multiplicacao digite 3 \n"); 
	    printf("\n \n");
	          printf("Digite aqui a opcao escolhida \n\n");
	                       scanf("%i",&op);
	
	 printf("digite o Primeiro numero \n");
	  scanf("%i",&n1);
         
	 printf("digite o Segundo numero \n");
	  scanf("%i",&n2);
      
        if(op==0){
        op=n1-n2;
	   printf(" Resultado %i",op);
	   }
         else if(op==1){
         op=n1+n2;
	     printf(" Resultado %i",op);
	     }
           else if(op==2){
           op=n1/n2;
	       printf(" Resultado %i",op);
	      }
              else if(op==3){
              op=n1*n2;
	          printf(" Resultado %i",op);
	         }  
        
        
return 0;
}
