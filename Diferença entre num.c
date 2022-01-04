#include<stdio.h>
int main(){
  int a,b,dif;
// diferença entre numeros  
  printf("\n  digite o primeiro numero");
scanf("%i",&a);

  printf("\n  digite o segundo numero");
scanf("%i",&b);

     if(a>b){
	 printf("\n o primeiro numero eh maior %i",a);
	 }
     else{
	 printf("\n o segundo numero eh maior %i",b);
	 }

dif=a-b;
 printf("\n a diferenca entre %i e %i eh %i",a,b,dif);

return 0;
}
