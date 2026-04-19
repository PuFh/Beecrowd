#include <stdio.h>

//Soma de Ímpares Consecutivos III
int main(){
    int n,x,y,soma;

    scanf("%d",&n);
    for(int i =0; i < n;i++){
        //  errado
        scanf("%d %d",&x, &y);
        soma = 0;
        for(int j = 0; j < y;j++){
            if(x%2 != 0 ){
                soma += x;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}
