#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    char str[10];
    int i,val=0,decimel=0;
    cin>>str;
    len=strlen(str);
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            val=str[i]-48;

        }else if(str[i]>='a'&&str[i]<='z')
        {
            val=str[i]-97+10;
        }else if(str[i]>='A'&&str[i]<='Z')
        {
            val=str[i]-65+10;
        }
        i=i+1;
        len-=1;
        decimel=decimel+val*pow(17,len);

    }
    cout<<decimel;

    return 0;
}

