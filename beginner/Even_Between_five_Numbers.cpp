#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int ck,x;
    ck=0;

    for(int i=0;i<5;i++){
        cin>>x;
        if(x%2==0){
            ck++;
        }
    }

    printf("%d valores pares\n",ck);


    return 0;
}
