#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int weight[n];
    int cost=0,count=0,i;
    for(i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(i=0;i<n;i++)
    {
        if(weight[i]!=0)
        {
            count+=1;
        }
    }
    if(count==n)
    {
        for(i=0;i<n;i++)
        {
            if(weight[i]==weight[i+1])
            {
                i+=1;
            }
            cost+=weight[i];
        }
        cout<<cost+n;

    }else
    {
        cout<<"wrong input";
    }
    
    return 0;
}