#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    double a,b,c,pi;

    double triangle,circle,trapizium,squre,rectangle;
    pi = 3.14159;
    cin >>a >>b >>c;

    triangle=0.5*a*c;

    circle=pi* pow(c,2);

    trapizium=(a+b)/2*c;

    squre=pow(b,2);

    rectangle=a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapizium,squre,rectangle);




    return 0;
}
