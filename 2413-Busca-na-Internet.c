#include <stdio.h>
 
int main() {
 
    int t,s;

    scanf("&d",&t);

    if (t >= 1 && t <= 1000){
        s = 4 * t;
        printf("oi %d\n",s);
    }
    printf("teste\n");
 
    return 0;
}