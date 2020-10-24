#include<bits/stdc++.h>
using namespace std;
int main()
{
    int trainee[3][3];
    int avarage[3]={0};
    int i,j,max=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>trainee[i][j];
            if(trainee[i][j]<1 || trainee[i][j]>100)
            {
                trainee[i][j]=0;
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            avarage[i]+=trainee[j][i];
        }
        avarage[i]=avarage[i]/3;
    }
    for(i=0;i<3;i++)
    {
        if(avarage[i]>max)
        {
            max=avarage[i];
        }
    }
    for(i=0;i<3;i++)
    {
        if(avarage[i]==max)
        {
            cout<<"Trainee Number"<<i+1;

        }
        if(avarage[i]<=70)
        {
            cout<<"Trainee Unfit";
        }
    }
    return 0;
}