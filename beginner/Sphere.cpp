#include<iostream>
#include<cstdio>
#include<cmath>


using namespace std;

int main(){

    double radius,volume,pi;

    pi=3.14159;
    cin>>radius;

    volume= (4/3.0)*pi*pow(radius,3);

    printf("VOLUME = %.3lf\n",volume);



 return 0;
}
