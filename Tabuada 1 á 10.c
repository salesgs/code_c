#include<stdio.h>
int main(){                 //tabuda só permitido numeros de 1 a 10;
int total,n,i;
      printf("digite o valor \n");
  scanf("%i",&n);
     
	  while(n<=0 || n>10){
      printf("numero invalido :( \n");
	   printf("digite o valor novamente \n");
	   scanf("%i",&n);
	         if(n>=1 && n<11){
		       break;
			 
			 }
	   
	  }
          for(i=1;i<=10;i++){
		  total=n*i;
		  printf("%i x %i =  %i \n",n,i,total);
		  }    
  
return 0;
}
