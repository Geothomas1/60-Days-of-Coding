#include<bits/stdc++.h>
using namespace std;
int main()

{

  int intno,extno;
  float cost=0,temp;
  cin>>intno>>extno;
  int i,costinto=18,costexto=12;
  if(intno<0 ||extno<0)
  {
    cout<<"INVALID INPUT";
  }else if(intno==0 || extno==0)
  {
 cout<<"Total estimated Cost:0 INR";
  }else
  {
    for(i=0;i<intno;i++)
  {
    cin>>temp;
    cost+=costinto*temp;
  }
  for(i=0;i<extno;i++)
  {
    cin>>temp;
    cost+=costexto*temp;
  }
  cout<<"Total estimated Cost:"<<cost<<"INR";
  }
  
  
    return 0;
}