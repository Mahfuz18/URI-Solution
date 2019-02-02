#include<iostream>
#include<cstdio>

using namespace std;
int main(){

    int a,b,c,d;

    float price_1,price_2,total;

    cin>>a>>b>>price_1;
    cin>>c>>d>>price_2;

    total=(b*price_1)+(d*price_2);

    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;

}
