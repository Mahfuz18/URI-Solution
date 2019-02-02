#include<iostream>
#include<cstdio>

using namespace std;

int main(){

int test;

float x,y,result;

cin >> test;

for(int i=0;i<test;i++){

     cin>>x>>y;
     if(y==0) cout<<"divisao impossivel"<<endl;

     else {
       result= x/y;
       printf("%.1f\n",result);



     }

}


return 0;
}
