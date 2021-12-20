#include<stdio.h>              
int main(){
int num;
                          
    printf("digite o numero \n");
     scanf("%i",&num);
     if(num%2==0){
	 printf("\n numero eh par");
	    if(num<=-0){
	    printf("\n numero eh negativo");
		}
              else if(num>0){
	          printf("\n numero eh positivo");
	          }
	   }
    if(num%2==1){
		  printf("\n numero eh impar");
		  
		   if(num<=-0){
		   printf("\n numero eh negativo");
		   }
		     else if(num>0){
		      printf("\n numero eh positivo");
		      }
		  
		}
      

return 0;
}
