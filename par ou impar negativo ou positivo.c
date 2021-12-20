#include<stdio.h>              
int main(){
int num;
                          
    printf("digite o numero \n");
     scanf("%i",&num);
     if((num%2==0)&& (num>0)){
	 printf("esse valor eh par e positivo \n");
	 }
	 else if((num%2==0) && (num<0)){
	 printf("esse valor eh par e negativo \n");
	 }    
	   
	     if((num%2==1) && (num>0)){
		 printf("\n esse valor eh impar e positivo");
		 }  
	     else if((num%2==-1)&& (num<0)){
		 printf("\n esse valor eh impar e negativo");
		 }     
	 
	  
return 0;
}
