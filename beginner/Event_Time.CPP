    #include<iostream>
    #include<cstdio>

    using namespace std;
    int main(){

    string s,t,a,b,x,y;
    int day1,hour1,minute1,second1;
    int day2,hour2,minute2,second2;
    int day,hour,minute,sec;

    cin>>s>>day1;
    cin>>hour1>>x>>minute1>>y>>second1;

    cin>>t>>day2;
    cin>>hour2>>a>>minute2>>b>>second2;

    if(second2<second1){
        sec=second2+60-second1;
        minute1++;
    }

    else{
        sec=second2-second1;
    }

    if(minute2<minute1){
        minute=minute2+60-minute1;
        hour1++;
    }
    else{
        minute=minute2-minute1;
    }

    if(hour2<hour1){
        hour=hour2+24-hour1;
        day1++;
    }

    else{
        hour=hour2-hour1;
    }

    day = day2-day1;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,minute,sec);







    return 0;
    }
