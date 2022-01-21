#include<stdio.h>
int main(){
int i,par,num,para,numero=0;      //numero digitado pelo usuario
                                 // numero de parada digitado por ele 
                                // com intenção de mostra os numeros pares do 
                               //numero inicial até o numero de parada
                               //digitado pelo mesmo usuário.
                               // ao final o progama mostra a quantidade total de numeros pares
                              
printf("digite um numero inicial  \n");
   scanf("%i",&num);

printf("digite o numero em que desejar parar ,para saber a quantidade de numeros pares existentes\n");
   scanf("%i",&para);

      for(i=num;i<=para;i++){
        if(i%2==0){
		printf("%i esse valor e par \n",i);
		numero++;
		}
     
     }  
      printf("ate esse numero existem %i numeros pares \n\n",numero);

return 0;
}
