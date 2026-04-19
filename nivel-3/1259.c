#include <stdio.h>

//ordenadar vetor
int ordenar(int*,int);

int main(){
    int n,valor,par_cont,imp_cont;
    par_cont = 0;
    imp_cont = 0;

    scanf("%d",&n);

    int par[n],impar[n];

    for(int i = 0; i < n;i++){
        scanf("%d",&valor);
        if(valor%2 == 0){
            //eh par
            par[i] = valor;
            par_cont++;
        }else{
            //eh impar
            impar[i] = valor;
            imp_cont++;
        }
    }
    //criar um vetor new par e impar com tamnahos imp_cont e par_cont e depois ordenar com func cresc. e descr., e imprimir while

    return 0;
}

int ordenar(int* v, int tam){

}