#include<stdio.h>
int main(){
 int id,tp;
 
  printf("digite sua idade \n\n");
scanf("%i",&id);

  
     if(id>=60){
     printf("digite o tempo de trabalho \n\n");
     scanf("%i",&tp);
          printf("vereficaremos se voce pode ou nao se aposentar \n\n");
		  if(tp<25){
		  printf("voce nao pode se aposentar :(\n \n");
		  }
		  
		  else if(id>=60 && tp>=25){
		   printf("voce pode se aposentar :) \n\n");
		  }
    
     
     }

 
     else{
      printf("voce nao pode se aposentar :( \n\n");     
	 }
return 0;
}
