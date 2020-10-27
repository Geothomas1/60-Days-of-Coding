#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,j,m,p;
    float eatban=0.0,eatpe=0.0;
    cin>>n>>k>>j>>m>>p;
    if(k==0 or j==0)
    {
        cout<<"INVALID input";
    }else
    {
        if(k>0)
        {
            eatban=(float)m/k;

        }
        if(j>0)
        {
            eatpe=(float)p/j;
        }

        cout<<"Total no mokeyes remain:"<<n-(eatban+eatpe);

    }
    




    return 0;
}