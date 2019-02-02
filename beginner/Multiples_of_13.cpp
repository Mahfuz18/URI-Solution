#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long int x,y,sum;
    sum=0;

    cin>>x>>y;

    if(x<y)
	{
		while(x<=y){

		if(x%13!=0){
			sum=sum+x;

		}

		x++;

	}
	}

	else if(y<x){
		while(y<=x){

		if(y%13!=0){
			sum=sum+y;

		}

		y++;

    }
	}


    printf("%ld\n",sum);

	return 0;
}
