#include <stdio.h>

int main()
{
       float abcd[4][4];
       
       int i, j, cont;
       float par, impar;
       float media;
       impar = 0;
       par = 0;
       cont = 0;
       for(i=0; i<4; i++){
           for(j=0; j<4; j++){
               printf("\nDigite um número:");
               scanf("%f", &abcd[i][j]);
           }
       }
       for(i=0; i<4; i++){
           for(j=0; j<4; j++){
               if(j % 2 == 0){
                   par = par + abcd[i][j];
                   cont = cont + 1;
               }
               else{
                   impar = impar + abcd[i][j];
               }
           }
       }

               media = impar/cont;
               
               printf("\nA soma dos valores das colunas impares é %2.f", impar);
               printf("\nA média dos valores das colunas pares é %2.f", media);
}