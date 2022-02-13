#include<stdio.h>
int main(){
int vl1,vl2, i=0,j;

     printf("digite o primeiro numero \n");
scanf("%i",&vl1);

  printf("digite o segundo numero \n");
scanf("%i",&vl2);
 
 if(vl1<vl2 &&i<vl2){
    i+=vl1 ;
      printf("Do menor para o maior \n");
	    for(;i<=vl2;i++){    
        printf("%i  \n",i);
  
       }
}
   printf("Do maior para o menor \n");
   if(vl2>vl1){
       for(;vl2>=vl1;vl2--){
       printf("|%i|",vl2);
       }
  
}     

 	  

return 0;
}
