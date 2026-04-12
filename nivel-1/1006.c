#include <stdio.h>

int main(){
    float a,b,c;
    double media;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    if(a > 10|| b > 10 || c > 10){
        return 0;
    }

    media = a*0.2 + b*0.3 + c*0.5;

    printf("MEDIA = %.1lf\n",media);

    return 0;
}