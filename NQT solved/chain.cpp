#include<bits/stdc++.h>
using namespace std;
int main()
{
    string parent;
    cin>>parent;
    string x;
    cin>>x;
    if(x=="N")
    {
     cout<<"TOTAL MEMBERS 1"<<endl;
     cout<<"COMISSION DETAILS"<<endl;
     cout<<parent<<"250 INR";  
    }else
    {
         string child;

        cin >> child;

        vector<string>v;

        string temp = "";

        for (int i = 0; i < child.length(); i++) {

            if (child[i] == ',') {

                v.push_back(temp);

                temp = "";

            }

            else  if (child[i] != ' ')

                temp += child[i];

        }

     v.push_back(temp);

     cout<<"TOTAL MEMBERS"<<v.size()+1<<endl;
     cout<<"COMISSION DETAILS"<<endl;
     cout<<parent<<v.size()*500<<"INR"<<endl;
     for(auto a:v )
     {
         cout<<a<<"250 INR"<<endl;
     }


        

    }
    



    return 0;
}