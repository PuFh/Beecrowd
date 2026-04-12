# include <stdio.h>


#define PI 3.14159
int main(){
    double r,volume;

    scanf("%lf",&r);

    volume = (4.0/3) * PI * (r*r*r);

    printf("VOLUME = %.3f\n",volume);

    return 0;
}