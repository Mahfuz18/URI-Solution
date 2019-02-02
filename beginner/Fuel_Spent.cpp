#include<iostream>
#include<cstdio>

using namespace std;

int main(){



float a,b,result,needed_fuel;

cin>> a>>b;

result=a*b;

needed_fuel=result/12.0;

printf("%.3f\n",needed_fuel);



return 0;
}
