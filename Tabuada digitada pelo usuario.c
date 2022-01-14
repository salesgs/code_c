#include<stdio.h>
int main(){
int x,cont=0,resul;      // tabuda 

  printf("digite o numero para saber a tabuada");
  scanf("%i",&x);
     while(cont<10){
     cont++;
     resul=x*cont;
	 
	 printf("%i X %i= %i \n\n",x,cont,resul);   
           
     }

return 0;
}
