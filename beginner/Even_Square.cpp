#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    long int x,i,result;

    cin>>x;

    for(i=2;i<=x;i++){

         if(i%2==0){
            result=pow(i,2);
            printf("%ld^2 = %ld\n",i,result);
         }

    }

    return 0;
}
