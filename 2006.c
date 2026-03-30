#include <stdio.h>
 
int main() {
    int T,x,contador;
    scanf("%d",&T);
    contador = 0;
    x = 0;
    for(int i = 0; i < 5; i++){

        scanf("%d",&x);

        if(x == T){
            contador++;
        }
    }
    printf("%d\n",contador);
    return 0;
}