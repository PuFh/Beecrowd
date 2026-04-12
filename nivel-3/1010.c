#include <stdio.h>

int main(){
    //c = codigo, q = quantidade, v = valor, 1 ou 2= qual peca eh
    int cp1, q1;
    int cp2, q2;
    double v1, v2, valor;

    //peca 1
    scanf("%d %d %lf", &cp1, &q1, &v1);
    //peca 2
    scanf("%d %d %lf", &cp2, &q2, &v2);

    valor = q1*v1 + q2*v2;

    printf("VALOR A PAGAR: R$ %.2lf\n",valor);

    return 0;
}