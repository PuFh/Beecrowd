#include <stdio.h>

int main(){
    char nome[10];
    double salario,vendas,TOTAL;

    scanf("%s", nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);

    TOTAL = salario + vendas*0.15;
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}