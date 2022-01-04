#include<stdio.h>
  int main(){
  float x,y,med;
    //se caso a media for maior que 10 a nota é invalida progama encerrado. 
    // caso contrario o progama realizará o calculo da média.
  
  
  printf("\n  digite a nota 01 \n");
scanf("%f",&x);
   
      if(x<=10){
       printf("\n  digite sua nota 02 \n ");
	   scanf("%f",&y);
	         
	          if(y<=10){
			 printf("\n sua media foi \n");
			 med=(x+y)/2;
	         printf("\n\n %.2f \n ",med);
	               if(med<6){
			       printf("voce esta reprovado \n :(");
			       } 
			         else if(med>=6){
			          printf("voce esta aprovado \n :)");
				     }
			 
			 }
	         else if(y>10){
			 printf("A segunda nota eh  ivalida fim do progama :(");
			   }
	           
	   }
       else{
	   printf("nota invalida fim do progama :(");
	   }


return 0;
}
