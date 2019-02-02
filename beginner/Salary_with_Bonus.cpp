#include<iostream>
#include<cstdio>

using namespace std ;

int main(){

   string str;
   float salary,total_sell,extra;

   cin>>str;
   cin>> salary>>total_sell;

   salary=salary+(total_sell*15)/100;

   printf("TOTAL = R$ %.2f\n",salary);

 return 0;
}
