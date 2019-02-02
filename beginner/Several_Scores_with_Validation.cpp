#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float x,y,a,b,in,result;
    int ck=0;

    while(cin>>in){

        if(in<0 || in>10){
			cout<<"nota invalida"<<endl;
        }

        else{
			if(ck==0)
			{
				a=in;
				ck++;

			}
			else
			{
				b=in;
				result=(a+b)/2;
				printf("media = %.2f\n",result);

				result=-5;
				ck=0;




				while(cin>>x && x!=1){


					cout<<"novo calculo (1-sim 2-nao)"<<endl;

					if(x==2) return 0;
				}

				if(x==1){
					cout<<"novo calculo (1-sim 2-nao)"<<endl;

				}

				}



			}




        }




    }





