#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N=10;
    int k=5;
    int input,r;
    cin>>input;
    if(input>=1 &&input<=5)
    {
          r=N-input;
       cout<<"NUMBER OF CANDIES SOLD:"<<input<<endl;
       cout<<"NUMBER OF CANDIES AVAILABLE:"<<r<<endl; 
       
    }else
    {
         cout<<"INVALID INPUT"<<endl;;
        cout<<"NUMBER OF CANDIES AVAILABLE:"<<N<<endl;
     
    }
    return 0;
}