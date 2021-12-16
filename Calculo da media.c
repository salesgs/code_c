#include<stdio.h>
int main(){
float notas1,notas2,notas3,notas4,soma;
int num;

 printf( "\n Qual total de numeros de notas a serem somadas \n");
     scanf("%i",&num);

    printf("\n digite sua nota 01");
     scanf("%f",&notas1);

    printf("\n digite sua nota 02");
     scanf("%f",&notas2);

     printf("\n digite sua nota 03");
     scanf("%f",&notas3);


   printf("\n digite sua nota 04");
     scanf("%f",&notas4);

      printf("\n \n");

soma=(notas1+notas2+notas3+notas4)/num;

printf("Essa foi a media final |%.2f|",soma );

if(soma>=6){
printf("\n aprovado :)");
}
else{
printf("\n Reprovado :(");
}


return 0;
}
