#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    if(0 < n < 13){
        //codigo
        int i =0;
        int fat = 1;
        while(i != n){
            fat *= n-i;
            i++;
        }
        printf("%d\n",fat);  
    }

    return 0;
}