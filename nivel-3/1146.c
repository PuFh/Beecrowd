#include <stdio.h>

int main(){
    int n;
    n = 1;

    while(n != 0){
        scanf("%d",&n);
        if(n != 0){
            for(int i = 1; i <= n; i++){
                printf("%d",i);
                if(i != n){
                    //para n imprimir no ultimo
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    //pode parece estranho esses prints, mas eles sào necessarios para satisfazer o que foi exigido no enunciado
    // como n ter espaço no ultimo valor a ser escrito e ir para a linha de baixo
}