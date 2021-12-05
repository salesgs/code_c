#include<stdio.h>
int main(){

int a=0,b=050607;    // para ter o acesso concedido é precisso digitara a senha da variavel b.
                     //para ter o laço do loop quebrado.   
while(a!=b){
printf("\n digite o numero da sua senha ");
scanf("%i",&a);
      if(a==b){
	  printf("acesso concedido");
	  break;
	  }
        else if(a!=b){
		printf("\n senha incorreta");
		printf("\n digite novamente");
		scanf("%i",&a);
		}
      
              switch(a){
		        case 050607:
				printf("\n acesso concedido");
				}     

}



return 0;
}
