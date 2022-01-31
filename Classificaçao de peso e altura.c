#include<stdio.h>
int main(){
float altura,peso;

 printf("digite sua altura");
scanf("%f",&altura); 

 printf("digite seu peso");
scanf("%f",&peso); 
 
if(altura<1.20 && peso<61){
printf("Sua classificacao eh A \n");
}      
 else if(altura<1.20 && peso>=60 && peso<91){
 printf("Sua classificacao eh D \n");
}
	     
   else if(altura<1.20 && peso>=91){
   printf("Sua classificação eh G \n");
	}   
	        
     else if(altura>1.19 && altura<1.71 && peso<61) {
	 printf("Sua Classificação eh B \n");
 	 }
                 
        else if(altura>1.19 && altura<1.71 && peso>=60 && peso<91){
	     printf("Sua classificacao eh \n E");
	     }
           
		  else if(altura>1.19 && altura<1.71 && peso>=91){
		  printf("\n Sua classificacao eh H");
	       }            
               
			 else if(altura>1.70 && peso<61){
			 printf("\n Sua classificação eh C \n");
			 }                 
			 
			   else if(altura>1.70 && peso>=60 &&  peso<91){
			  printf("Sua Classificação em F \n");
			  }
			            else if(altura>1.70 &&  peso>=91){
			           printf("\n Sua Classificaçao eh I \n");
			            }

return 0;
}
