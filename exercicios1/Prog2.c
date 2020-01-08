#include <stdio.h>

int main (){
    int x;
    int y;
    int valor;


printf("Selecione o valor de X\n");
scanf("%d", &x);
printf("Selecione o valor de Y\n");
scanf("%d", &y);
valor = x + y;

printf("A Soma de X e Y é:%d\n", valor);

if(x == y){
    printf("X e Y são iguais");
    
    }if(x>y){
         printf("X é maior que Y\n");
     }else if(y>x){
         printf("Y é maior que X\n");
     }
     }

