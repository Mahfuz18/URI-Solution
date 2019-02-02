#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,ck;
    ck=0;

    cin>>x;

    do{
            if(x%2!=0){
                cout<<x<<endl;

                ck++;
            }
            x++;

    }while(ck<6);

    return 0;
}
