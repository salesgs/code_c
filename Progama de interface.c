#include<stdio.h>
int main(){
int ra,num;

printf("\n digite 1 para continuar ou || 00 para encerrar");
scanf("%i",&ra);
 if(ra==0){
    printf("fim do progama ! |x|:(");
     }
     else if(ra==1){
      printf("\n  Digite sua idade :)");
      scanf("%i",&num);
      
	   switch(num){
	   case 15:
	   printf("\n  voto opicional");
	   break;
	   }
	      if(num>=18){
	      printf("\n voto obrigatorio");
	      }
	       while(num<=14){
           printf("\n digite sua idade");
		   scanf("%i",&num);
           if(num==15){
		  printf("\n voto opicional :)");
		   break;      	
	    	}
             else if(num>=18){
	    printf("\n voto obrigatorio");
	   }  
	  }
return 0;
}
}
