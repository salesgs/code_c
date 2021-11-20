# code_c
Exercícios resolvidos em linguagem C
#include<stdio.h>
int main(){

int cont,pot,base=3;
printf("potencia ate o 15 termo de um numero Base \n");

printf("\n 3 ^ 1 = 3");
for(cont=2;cont<=15;cont++){
printf( "\n 3 ^ %i = %i ",cont,base*3);
pot=base*3;
base=pot;
}

return 0;
}



