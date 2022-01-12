#include<stdio.h>
int main(){
  int num;
                        
printf("digite um numero ");
scanf("%i",&num);
   while(num==0 ||num>7){
   printf("erro \n ");
        printf("digite novamente");
          scanf("%i",&num);
        if(num>0 && num<8){
		break;
		}
   }
switch(num){
case 1:
printf("Hoje eh Segunda-Feira");
}

  switch(num){ 
  case 2:
  printf("Hoje eh  Terca-Feira");
 }
    switch(num){
    case 3:
    printf("Hoje eh  Quarta-Feira");
    }
         switch(num){
         case 4:
         printf("Hoje eh  Quinta-Feira");
         }

             switch(num){
             case 5:
             printf("Hoje eh  Sexta-Feira");
             }
                switch(num){
                 case 6:
                 printf("Hoje eh  Sabado");
                 }
                  switch(num){
                 case 7:
                 printf("Hoje eh Domingo");
                }

                
return 0;
}
