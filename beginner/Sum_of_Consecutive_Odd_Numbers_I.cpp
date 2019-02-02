#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,y,sum;

    sum=0;

    cin>>x>>y;

    if(x<y){

            for(int i=x+1;i<y;i++){
                    if(i%2!=0){
                        sum=sum+i;
                    }

            }

    }

    else if(x>y){
            for(int i=x-1;i>y;i--){
                    if(i%2!=0){
                        sum=sum+i;
                    }

            }

    }

    else if(x==y){
            sum=0;

    }

    printf("%d\n",sum);

    return 0;
}
