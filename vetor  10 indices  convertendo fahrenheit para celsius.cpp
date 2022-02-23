#include<stdio.h>
int main(){
float vet[10],c[10];
int i;

for(i=0;i<=10;i++){
printf("DIGITE O GRAU F \n");
 scanf("%f",&vet[i]);
//contador inteiro ,porem vetor float;

}
       for(i=0;i<=10;i++){
      	c[i]=(vet[i]-32)/1.8;
      	 printf("Em celsius %.4f \n",c[i]);
		}
   // conversão dos valores armazenados no primeiro vetor para celsius 

return 0;
}
