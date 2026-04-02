#include "stdio.h"

int main(){
    /*sequencia
    1
    2
    2
    1
    2
    1
    1
    2
    2
    1
    1
    */
    int s,n,t,seq =0;
    int v[11] = {1,2,2,1,2,1,1,2,2,1,1};

    scanf("%d", &n);


    if(3 <= n <=500){
        for(int i = 0; i < n; i++){
            scanf("%d",&t);
                if(t == v[i]){
                    seq++;
                }
            seq = 0;
        }

    }
    s=seq;
    printf("%d\n",s);



    return 0;
}