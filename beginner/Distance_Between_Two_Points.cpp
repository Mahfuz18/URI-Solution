#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    double x1,y1,x2,y2,result;

    cin >>x1>>y1>>x2>>y2;

    result=pow((x1-x2),2)+pow((y1-y2),2);
    result= sqrt(result);
    printf("%.4lf\n",result);



    return 0;
}
