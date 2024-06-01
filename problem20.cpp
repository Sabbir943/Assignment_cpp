#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int large,small;
    cout<<"Enter three Number: ";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"Large Number : "<<a<<endl;
        large=a;
    }
    else if(b>c)
    {
        cout<<"Large Number : "<<b<<endl;
        large=b;
    }
    else{
        cout<<"Large Number : "<<c<<endl;
        large=c;
    }
    if(a<b&&a<c)
    {
        cout<<"Small Number : "<<a<<endl;
        small=a;
    }
    else if(b<c)
    {
        cout<<"small Number : "<<b<<endl;
        small=b;
    }
    else{
        cout<<"small Number : "<<c<<endl;
        small=c;
    }
    if(large%2==0)
    {
        cout<<"Even Number is: "<<large<<endl;
    }
    else{
        cout<<"Odd Number is: "<<large<<endl;
    }
    if(small%2==0)
    {
        cout<<"Even Number is: "<<small<<endl;
    }
    else{
        cout<<"Odd Number is: "<<small<<endl;
    }
    return 0;
}