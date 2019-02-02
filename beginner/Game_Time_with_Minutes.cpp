#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    int h1,m1,h2,m2,result,hour,minute;

    cin>>h1>>m1>>h2>>m2;


       m1=h1*60+m1;
       m2=h2*60+m2;

    if(m1==m2)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");




    else if(m1>m2)
    {
        result=1440-(m1-m2);
        hour=result/60;
        minute=result-(hour*60);

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    }

    else if(m1<m2){
        result=m2-m1;
        hour=result/60;
        minute=result-hour*60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);

    }



    return 0;
}
