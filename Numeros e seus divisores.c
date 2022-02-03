#include<stdio.h>
int main(){
int num,div,i,op;


  printf("Digite um numero para saber seus divisores \n");
scanf("%i",&num); 
     i=0;
         while(i!=num){
           i++;
		   if(num==1 || num==0){
		  break;
		  }
		  
		      if(num%2==0){
	          op=num/2;
	          num=op;
	       
		      printf("  %i  \n",op);
	          }
                  else if(num%2==1){
			       op=num/2;
	               num=op;
	               printf("  %i  \n",op);
			      } 
	         
	  }

return 0;
}
