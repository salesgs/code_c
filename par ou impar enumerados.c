#include<stdio.h>
int main(){
 int numero=1,num,i,par,impar,nimpar=1;
 
 //valores impares  e pares enumerados em ordem   
   for(i=1;i<=10;i++){
     printf("digite o valor \n\n");
     scanf("%i",&num);   
         if(num%2==0){		   
		    
			printf("esse numero eh par %i \n",num);     
            printf("esse eh o|%i| numero par \n\n",numero++);      
	       }
           
       
       else{
         printf("esse  numero eh  impar %i \n",num);
		 printf("esse eh o |%i| numero impar \n\n",nimpar++);
		 }  
   }
       


return 0;
}
