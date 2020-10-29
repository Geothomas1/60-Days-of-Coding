#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    int m=0,a=0,g=0,d=0,f=0;
    string c[5]={"Malaysia", "Austraila", "Germany", "Dubai", "France"};

    for(int i=0;i<25;i++)
    {
        cin>>temp;
        if(temp>=1 and temp<=5)
        {
        if(temp==1)
        {
            m+=1;
        }else if(temp==2)
        {
            a+=1;
            
        }else if(temp==3)
        {
            g+=1;
        }else if(temp==4)
        {
            d+=1;
        }else if(temp==5)
        {
            f+=1;
        }
        }
        else
        {
            cout<<"Invalid input";
        }
        

    }
    int arr[5]={m,a,d,g,f};
    int j, first, second,n,z;
    first = second = INT_MAX;  
    for (j=0;j<5;j++)  
    {  
        
        if (arr[j] < first)  
        {  
            second = first;  
            first = arr[j];  
            n=j;
        }  else if(arr[j] < second && arr[j] != first)  
        {
            second = arr[j];  
            z=j ;
        }
    }  
    cout<<second;
    cout<<first;
  cout<<c[n]<<endl;
  cout<<c[z]<<endl;
     

    return 0;
}