#include <stdio.h>

int main(){
    float euro;
    float USD;
    float Cad;
    int opcao;

    printf("Prima 1 para converter Euro - USD, 2 para USD-Euro, 3 para Euro -Cad, 4 para Cad - Euro\n");
    scanf("%d",&opcao);

    if( opcao == 1){
        printf("Insere o valor:\n");
        scanf("%f", &euro);
        USD = euro * 1.1;
        printf("%f euros é o equivalente a: %f USD\n", euro , USD);
    }
    else if (opcao == 2){
       printf("Insere o valor:\n");
        scanf("%f", &USD);
        euro = USD / 1.1;
        printf("%f USD é o equivalente a: %f Euros\n", USD , euro); 
    }
    else if(opcao == 3){
      printf("Insere o valor:\n");
        scanf("%f", &euro);
        Cad = euro * 1.45;
        printf("%f euros é o equivalente a: %f Cad\n", euro , Cad); 
    }
    else if (opcao == 4){
        printf("Insere o valor:\n");
        scanf("%f", &Cad);
        euro = Cad / 1.45;
        printf("%f euros é o equivalente a: %f Cad\n", Cad , euro); 
    }
    else if (opcao >= 5){
        printf("Opção invalida, Obrigado!\n");
    }

}