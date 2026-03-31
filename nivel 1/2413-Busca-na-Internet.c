#include "stdio.h"

int main(){
    int t,s;
    
    scanf("%d",&t);

    if( t >= 1 && t <= 1000 ){
        s = 4 * t;
        printf("%d\n", s);
    }

    return 0;
}