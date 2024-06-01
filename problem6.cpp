#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,length;
    cout<<"Enter First Number:";
    cin>>n1;
    cout<<"Enter Second Number:";
    cin>>n2;
   
    n3=n1+n2;
    cout<<"Enter length of Fibonacci:";
    cin>>length;
     cout<<n1<<" "<<n2<<" ";
    for(int i=0;i<length-2;i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}