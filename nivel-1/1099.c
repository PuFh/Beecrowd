#include <stdio.h>

int main(){
    int n,x,y,soma;

    scanf("%d",&n);

    for(int i = 0; i < n;i++){
        scanf("%d %d",&x,&y);
    
        if(y > x){
            for(int i = x; i < y;i++){
                if(i%2!=0){
                    soma +=i;
                }
            }
        }else{
            for(int i = y; i < x;i++){
                if(i%2!=0){
                    soma +=i;
                }
            }
        }
        printf("%d\n",soma);
  
    }
    return 0;
}