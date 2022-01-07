#include<stdio.h>
int main(){        //ordem decrescente
  int a1,b2,c3; 
           
printf("digite o primeiro numero \n");
  scanf("%i",&a1);

printf("digite o segundo numero \n");
  scanf("%i",&b2);

printf("digite o terceiro numero \n");
  scanf("%i",&c3);

     if(a1>b2 && b2>c3){
      printf("%i \n\n",a1);
	  printf("%i \n\n",b2);
	  printf("%i \n\n",c3);
	  }
          else if(a1>b2&& c3>b2){
	       printf("%i \n\n",a1);
	       printf("%i \n\n",c3);
	       printf("%i \n\n",b2);
	      }
	           else if(b2>c3 && c3>a1){
		        printf("%i \n\n",b2);
	            printf("%i \n\n",c3);
	            printf("%i \n\n",a1);
			    }  
   
                  else if(b2>c3 &&a1>c3){
		          printf("%i \n\n",b2);
	              printf("%i \n\n",a1);
	              printf("%i \n\n",c3);
		          }

                      else if(c3>b2 && b2>a1){
					  printf("%i \n\n",c3);
	                  printf("%i \n\n",b2);
	                  printf("%i \n\n",a1);
					  }
                           else if(c3>a1 && a1>b2){
						    printf("%i \n\n",c3);
	                        printf("%i \n\n",a1);
	                        printf("%i \n\n",b2);
						   }


return 0;
}
