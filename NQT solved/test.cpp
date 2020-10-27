#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c[3]={"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
    string t[8]={"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Green Tea","Organic Darjeeling Tea"};
    string s[4]={"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
    string b[3]={"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
    char str[]="Welcome to CCD!\nEnjoy your ";
    char ch;
    int  item;
    cin>>ch>>item;
    if(ch!='C' && ch!='c' && ch!='T' && ch!='t' && ch!='B' && ch!='b' && ch!='S' && ch!='s')
    {
        cout<<"INVALID OPTION!";
    }
    else if(ch=='C' || ch=='c')
    {
        if(item<=0 || item>3)
            cout<<"INVALID OPTION!";
        else
            cout<<str<<c[item-1]<<"!";

    }
    else if(ch=='T' || ch=='t')
    {
        if(item<=0 || item>8)
            cout<<"INVALID OPTION!";
        else
            cout<<str<<t[item-1]<<"!";

    }
    else if(ch=='S' || ch=='s')
    {
        if(item<=0 || item>4)
            cout<<"INVALID OPTION!";
        else
            cout<<str<<s[item-1]<<"!";

    }
    else if(ch=='B' || ch=='b')
    {
        if(item<=0 || item>3)
            cout<<"INVALID OPTION!";
        else
            cout<<str<<b[item-1]<<"!";

    }
    return 0;
}