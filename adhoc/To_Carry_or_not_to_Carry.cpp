#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    unsigned long int n1,n2,reminder;

    while(scanf("%lu%lu",&n1,&n2)==2){

       unsigned long int i,a[32],b[32];

       for(i=0;i<32;i++){
        a[i]=0;
        b[i]=0;
       }

        unsigned long int j=0;


       do{
            a[j]=n1%2;
            n1=n1/2;

            j++;

       }while(n1!=0);


      unsigned long int k=0;

       do{
            b[k]=n2%2;
            n2=n2/2;

            k++;



       }while(n2!=0);


     long int num_of_bit;

       if(j>k){
            num_of_bit=j;

       }
       else{
            num_of_bit=k;

       }



        unsigned long int result[num_of_bit];
        long int x;

        for(x=num_of_bit-1 ; x>=0 ; x--){

            if(a[x]==0 && b[x]==1){
                result[x]=1;

            }

            else if(a[x]==1 && b[x]==0){
                result[x]=1;

            }
            else{
                result[x]=0;

            }

        }


      long long int decimal=0;

        for(x=num_of_bit-1;x>=0;x--){

            if(result[x]==1){
                decimal=decimal+pow(2,x);
            }
        }

    printf("%lld\n",decimal);


    }

return 0;

}
