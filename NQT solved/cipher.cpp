#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string str;
    getline(cin,str);
    int key,i;
    cin>>key;
    if(key<0)
    {
        cout<<"INVALID KEY";
    }else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]!=' ')
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    if((int)(str[i]+key)<=90)
                    {
                    str[i]=(int)(str[i]+key);
                    }else
                    {
                         str[i]=(int)(str[i]+key-90+65-1); /* code */
                    }       
                }else if(str[i]>=97 && str[i]<=122)
                {
                    if((int)(str[i]+key)<=122)
                    {
                    str[i]=(int)(str[i]+key);
                    }else
                    {
                    str[i]=(int)(str[i]+key-122+97-1);
                    }
                }else if(str[i]>=48 && str[i]<=57)
                {
                    if((int)(str[i]+key)<=57)
                    {
                        str[i]=(int)(str[i]+key);
                    }else
                    {
                    str[i]=(int)(str[i]+key-57+48-1);
                    }
                }
        }
    }
    }
cout<<str;    
    return 0;
}