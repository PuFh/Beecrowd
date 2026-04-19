#include <stdio.h>

//  PUM
int main(){
    int n,cont;

    scanf("%d",&n);

    cont = 1;
    for(int i = 0; i < n;i++){
        for(int j = 1; j <= 4; j++){
            if(j%4 == 0){
                printf("PUM\n");
            }
            else{
                printf("%d ",cont);
            }
            cont++;
        }

    }

    return 0;
}