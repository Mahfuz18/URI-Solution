#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,in,out;

    in=out=0;

    cin>>x;

    int a[x];

    for(int i=0;i<x;i++){

        cin>>a[i];

        if(a[i]>=10 && a[i]<=20){
            in++;
        }
        else
            out++;

    }

    printf("%d in\n%d out\n",in,out);
    return 0;
}
