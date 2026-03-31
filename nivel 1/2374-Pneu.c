#include "stdio.h"

int main(){

    /*
    entradas:
     (1 ≤ N ≤ 40). A segunda linha contém um inteiro M que indica a pressão lida pela bomba (1 ≤ M ≤ 40).
     saida:
     diferença entre a pressão desejada e a pressão lida.
    */
    int N,M,S;

    scanf("%d",&N);//desejada
    scanf("%d",&M);//lida

    if(1 <= N <= 40 && 1 <= M <= 40){
        S = N - M;
        printf("%d\n",S);

    }
    return 0;
}