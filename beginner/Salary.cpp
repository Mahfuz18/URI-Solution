#include<iostream>

#include<cstdio>

using namespace std;

int main(){

    int num,working_hour;
    float salary,salary_per_hour;

    cin >> num >> working_hour >>  salary_per_hour;


    salary= salary_per_hour* working_hour;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,salary);



return 0;

}
