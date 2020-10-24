#include<bits/stdc++.h>
using namespace std;
int main()
{
    int weg;
    cin>>weg;
    if(weg>=0 && weg<=2000)
    {
        cout<<"Time Estimated :25 minutes";

    }else if(weg>=2001 && weg<=4000)
    {
        cout<<"Time Estimated :35 minutes";
    }else if(weg>=4001 && weg<=7000)
    {
        cout<<"Time Estimated :35 minutes";
    }else if(weg>=7001)
    {
        cout<<"OVERLOADED";
    }

    return 0;
}