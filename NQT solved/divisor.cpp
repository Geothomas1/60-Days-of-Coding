#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"Wrong input";

    }else
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}