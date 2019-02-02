#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,even,odd,pos,neg;

    even=odd=pos=neg=0;

    for(int i=0;i<5;i++){

         cin>>x;

        if(x%2==0){
            even++;
        }

        if(x%2!=0){
            odd++;
        }

        if(x>0){
            pos++;
        }
        if(x<0){
            neg++;
        }


    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);

    return 0;
}
