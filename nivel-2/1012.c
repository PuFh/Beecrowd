#include <stdio.h>

#define PI 3.14159

int main(){
    double a,b,c;
    double a_tri, a_cir, a_tra, a_qua, a_ret;

    scanf("%lf %lf %lf", &a,&b,&c);

    a_tri = a*c/2;
    printf("TRIANGULO: %.3lf\n",a_tri);
    
    a_cir = c*c* PI;
    printf("CIRCULO: %.3lf\n",a_cir);
    
    a_tra = (a+b)*c/2;
    printf("TRAPEZIO: %.3lf\n",a_tra);
    
    a_qua = b*b;
    printf("QUADRADO: %.3lf\n",a_qua);
    
    a_ret = a*b;
    printf("RETANGULO: %.3lf\n",a_ret);
    
    return 0;
}