#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    float salary,extra;

    cin>>salary;

    if (salary<=400.0){

        extra=(salary*15)/100;
        salary=salary+extra;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",salary,extra);
    }

    else if (salary>400.0 && salary <=800.0){

        extra=(salary*12)/100;
        salary=salary+extra;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",salary,extra);
    }


    else if (salary>800.0 && salary<=1200){

        extra=(salary*10)/100;
        salary=salary+extra;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",salary,extra);
    }

    else if (salary>1200.0 && salary <=2000){

        extra=(salary*7)/100;
        salary=salary+extra;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",salary,extra);
    }

    else if (salary>2000){

        extra=(salary*4)/100;
        salary=salary+extra;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",salary,extra);
    }

    return 0;
}
