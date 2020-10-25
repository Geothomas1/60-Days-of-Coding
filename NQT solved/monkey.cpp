#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,k,j;
    float atebanana=0.0,atepeanut=0.0;
    cin>>n;
    cin>>k;
    cin>>j;
    cin>>m;
    cin>>p;
    if(n<0 || k<0 || j<0 || m<0 || p<0)
    {
        cout<<"INVALID INPUT";
    }
    else
    {
        if(k>0)
            atebanana =(float)m/k;
        if(j>0)
            atepeanut =(float) p/j;
        n=n-atebanana-atepeanut;
        cout<<"Number of Monkeys left on the Tree:"<<n;
    }
    return 0;
}