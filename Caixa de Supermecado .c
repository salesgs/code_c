#include<stdio.h>
int main(){
 float cd1;
 float qtd,valor,cont;                

printf("digite 100 para Cachorro quente \n\n");
printf("digite 101 para Bauro Simples \n\n");
printf("digite 102 para Bauro com Ovo \n\n");
printf("digite 103 para Hamburguer \n\n");
printf("digite 104 para Chesburguer \n\n");
printf("digite 105 para Suco \n\n");
printf("digite 106 para Refirgerante\n\n ");

printf("DIGITE AQUI \n");
   scanf("%f",&cd1);

printf("DIGITE A QUANTIDADE AQUI \n");
   scanf("%f",&qtd);

     if(cd1==100){
       cd1=1.20;
	  valor=cd1*qtd;
      printf(" Total %.2f",valor); 
	  }
        else if(cd1==101){
	    cd1=1.30;
	    valor=cd1*qtd;
		printf(" Total %.2f",valor);
		} 
	     else if(cd1==102){
		 cd1=1.50;
		 valor=cd1*qtd;
	     printf(" Total %.2f",valor);		   
		}
	      else if(cd1==103){
			cd1=1.20;
			 valor=cd1*qtd;
			 printf(" Total %.2f",valor);
			 }     
               else if(cd1==104){
			   cd1=1.70;
			   valor=cd1*qtd;
			   printf(" Total %.2f",valor);
			   } 
                 else if(cd1==105){
			     cd1=2.20;
			     valor=cd1*qtd;
			     printf(" Total %.2f",valor);
			     }  
                      else if(cd1==106){
				      cd1=1.00;
				      while(cont!=qtd){
				      cont++;
					  valor=cd1*cont;
					  }
				      printf(" Total %.2f",valor);
				   }
                                
return 0;
}
