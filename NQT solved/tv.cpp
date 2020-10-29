#include<bits/stdc++.h>
using namespace std;
int main()
{
    int model,exchange,working;
    int cost[]={10000,7000,6000};
    float discout=0.0;
    float mrp=0.0;
    cin>>model>>exchange>>working;
    if(model>=1 && model <=3 && model!=' '){
        if(model==1)
        {
            mrp=cost[model-1];

        }else if(model==2)
        {
            mrp=cost[model-1];

        }else if(model==3)
        {
            mrp=cost[model-1];

        }
    }else
    {
        cout<<"Ivalid input";
    }
    if(exchange==1)
    {
            if(working==1)
            {
                discout=(2/100)*mrp;
                mrp=mrp-discout;
            }else if(working==2)
            {
                discout=(20/100)*mrp;
                mrp=mrp-discout;
            }
     } 
     else
        {
            cout<<"invalid input";
        }
        cout<<mrp<<"INR";

    return 0;
}