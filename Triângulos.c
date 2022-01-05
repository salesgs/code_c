#include<stdio.h>
int main(){
 int a,b,c;    ///formação de um triangulo e classificação.

   printf("digite o valor do lado A");
scanf("%i",&a);

   printf("digite o valor do lado B");
scanf("%i",&b);

   printf("digite o valor do lado C");
scanf("%i",&c);

   if(a+b>c && b+c>a && a+c>b){
   printf("eh possivel forma um triangulo :)");
   
     if(a==b ||c==a||b==c){
      printf("esse triangulo eh isoceles :)\n\n");
	  }
          else if(a==b && a==c){
           printf("esse trinagulo eh equilatero :)\n\n");
		   }
   
            else{
			printf("esse triangulo eh escaleno :)\n\n");
			}  
   
   }
    
 
else{
printf("nao eh possivel forma um triangulo :(");
}

return 0;
}
