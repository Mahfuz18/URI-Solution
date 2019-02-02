#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

float x,y,in,result;
int ck=0;


while(cin>>in){

   if(in<0 || in>10) {

   cout<<"nota invalida"<<endl;
   continue;

   }

   else {

   if(ck==0)
     {
              x=in;
              ck++;

     }

     else{

     y=in;
     result=(x+y)/2;
     printf("media = %.2f\n",result);
     return 0;

     }

   }


}


return 0;
}
