#include<stdio.h>
int main(){
int numero,desconto=20,total,preco;
char cartao,vezes;
  
  printf( "\n digite 1 para pagar avista || ou 2 para pagar no cartao ");
   scanf("%i",&numero);
       if(numero==1){
	    printf("\n digite o valor da compra para receber o desconto de R$20 reais");
	    scanf("%i",&preco);
	    total=preco-desconto;
	    printf("\n sua compra ficou :) R$%i",total);
	    }
          else if(numero==2){
	      printf("\n voce pode pacelar ate 10 X");
		  printf("\n digite o  numero do cartao");
		  scanf("%s",&cartao);
		  printf("\n digite quantas vezes ira pacelar");
		  scanf("%s",&vezes);
		  printf("\n Compra Feita :)");
		  }

return 0;
}
