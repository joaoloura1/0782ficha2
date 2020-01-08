#include <stdio.h>

int main(){
    float kg;
    float lb;
    int op;
  
  

printf("Conversão de kg para lb prima 1, conversão de lb para kg prima 2\n");
scanf("%d", &op);

if(op == 1) {
    printf("conversão de kg para lb, insira os kg:\n");
    scanf("%f", &kg);

    lb = kg*2.2;

    printf("%f kg é o equivalente a: %flb\n",kg,lb);

    } else if(op == 2){
        printf("conversão de lb para kg, insira as lb:\n");
        scanf("%f",&lb);
        kg = lb/2.2;
        printf("%f lb é o equivalente a: %fkg\n", lb, kg);

    }
}



