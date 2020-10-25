#include<bits/stdc++.h>
using namespace std;
float getFare(string Source, string Destination)
{
    float fair=0;
    float path[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    int index1,index2,i,j;
    string stop[8]={"TH","GA","IC","HA","TE","LU","NI","CA"};
    transform(Source.begin(),Source.end() , Source.begin(),::toupper);
    transform(Destination.begin(),Destination.end() ,Destination.begin(),::toupper);
    for(i=0;i<8;i++)
      {
          if(stop[i]==Source)
              index1=i;

          if(stop[i]==Destination)
              index2=i;
      }   
          
    if(index1==index2)
    {
        cout<<"INVALID OUTPUT";
        return 0;
    }else
    {
       for(j=index1;j<=index2;j++)
       {
           fair+=path[j];
           cout<<path[j];
       }
       return (fair*0.005);
    }
    
}
int main()
{
    string Source,Destination;
    cin>>Source>>Destination;
    cout<<getFare(Source,Destination)<<"INR";
    return 0;
}