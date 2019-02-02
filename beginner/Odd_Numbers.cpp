#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,i;
    i=1;
    cin>>x;

    do{
            if(i%2!=0){
                cout<<i<<endl;

            }
            i++;

    }while(i<=x);


    return  0;
}
