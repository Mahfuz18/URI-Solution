#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   int i,ck;

   i=2;


    do{
            ck=i%2;
             if(ck==0){
                cout<<i<<endl;
             }
             i++;


    }while(i<=101);

    return 0;
}
