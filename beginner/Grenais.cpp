#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,y,in,ck,win1,win2,draw,num_of_game;
    ck=win1=win2=draw=num_of_game=0;

    while(cin>>in)
	{
		if(ck==0){
			x=in;
			ck++;
		}

		else{


			y=in;

			if(x>y){
				win1++;
			}

			else if(y>x){
				win2++;
			}
			else if(x==y){
				draw++;
			}

			num_of_game++;
			ck=0;

			cout<<"Novo grenal (1-sim 2-nao)"<<endl;

			int go;


			cin>>go;
			if(go==2){

				printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",num_of_game,win1,win2,draw);

				if(win1>win2){
					cout<<"Inter venceu mais"<<endl;
				}

				else if(win2>win1)
				{
					cout<<"Gremio venceu mais"<<endl;
				}

				else if(win1==win2){
					cout<<"Não houve vencedor"<<endl;
				}

				return 0;

			}

		}

	}

	return 0;
}
