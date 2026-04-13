#include <stdio.h>

int main(){
    double x,y;

    //coordenadas
    scanf("%lf %lf",&x,&y);

    //origem
    if(x==0.0 && y ==0.0)
    {
        printf("Origem\n");
    }
    //eixo Y
    else if (x == 0.0)
    {
        printf("Eixo Y\n");
    }
    //eixo X
    else if (y == 0.0)
    {
        printf("Eixo X\n");
    }
    //quadrante 1
    else if (x > 0.0 && y > 0.0)
    {
        printf("Q1\n");
    }
    //quadrante 2
    else if (x < 0.0 && y > 0.0)
    {
        printf("Q2\n");
    }
    //quadrante 3
    else if (x < 0.0 && y < 0.0)
    {
        printf("Q3\n");
    }
    else if (x > 0.0 && y < 0.0)
    {
        printf("Q4\n");
    }

    return 0;
}