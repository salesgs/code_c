#include<stdio.h>
int main(){
float bm,bn,alt,area;
  
printf("digite a base maior do trapezio \n");
scanf("%f",&bm);

   while(bm<=0){
     printf("numero de base invalido :(");
        printf("digite novamente \n");
   
     printf("digite a base maior do trapezio \n");
     scanf("%f",&bm);
       if(bm>0){
	   break;
	    }
       
	}
	   
printf("digite a base menor do trapezio :) ");
   scanf("%f",&bn);
           
		   while(bn<=0){
	         printf("numero de base invalido :(");
               printf("digite novamente \n");
			     
		     printf("digite a base menor do trapezio :)");
		         scanf("%f",&bn);
		         if(bn>0){
				 break;
				 
				 }
		   }

printf("digite a altura");
scanf("%f",&alt);

area = (bm + bn) * alt /2;

printf(" o valor da area do trapezio = %.2f  \n",area);


return 0;
}
