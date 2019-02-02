#include<iostream>
#include<cstdio>


using namespace std;

int main(){

    float salary,tax;

    cin>> salary;

    if(salary<=2000){
        cout<<"Isento"<<endl;
    }

    else if(salary>2000 && salary<=3000){
        salary=salary-2000;
        tax=(salary*8)/100;
        printf("R$ %.2f\n",tax);
    }

    else if(salary>3000 && salary<=4500){
        salary=salary-3000;
        tax=80+(salary*18)/100;
        printf("R$ %.2f\n",tax);
    }

    else if(salary>4500){
        salary=salary-4500;
        tax=80+270+(salary*28)/100;
        printf("R$ %.2f\n",tax);
    }

    return 0;
}
