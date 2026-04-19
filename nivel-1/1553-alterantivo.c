#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    if(0 < n < 13){
        //codigo
        int fat = 1;
        for(int i = n; i >= 1;i--){
            fat *= i;
        }
        
        printf("%d\n",fat);  
    }

    return 0;
}