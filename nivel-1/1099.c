#include <stdio.h>

int main(){
    int n,x,y,i,j;
    int somador;
    scanf("%d",&n);
    // y tem que ser maior que x
    for(int i = 0; i < n;i++){
        scanf("%d %d",&x, &y);
        if(x > y){
            int ax;
            ax = y;
            y = x;
            x = ax;
        }
        somador = 0;
        j = x+1;
        while (j < y){
            if(j%2 != 0){
                somador += j;
            }
            j++;
        }
        printf("%d\n",somador);
        
    }
    return 0;
}