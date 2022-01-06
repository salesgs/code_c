#include<stdio.h>
int main(){
  int a;

  printf("digite sua idade para saber a sua categoria :)");
scanf("%i",&a);
   if(a<8){
   printf("sua categoria eh infantil |A| \n");
   }
     else if(a<11){
         printf("sua categoria eh infantil |B| \n");
      } 
        else if(a<14){
		printf("sua categoria eh juvenil |A| \n");
		}
           else if(a<18){
		   printf("sua categoria eh juvenil |B| \n");
		   }
             else{
			  printf("Senior");
			 }

return 0;
}
