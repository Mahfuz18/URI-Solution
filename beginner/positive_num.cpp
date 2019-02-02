#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float x,avg;
    int ck;
    ck=0;
    avg=0;

    for(int i=0;i<6;i++){
        cin>>x;
        if(x>0)
            {
                ck++;
                avg=avg+x;
            }
    }
    printf("%d valores positivos\n",ck);
    avg=avg/ck;
    printf("%.1f\n",avg);
    return 0;
}
