#include<iostream>
using namespace std;
int main()
{
    int n,temp,sum=0,rem;
    cout<<"Enter Number:";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<"Palindrome!"<<endl;
    }
    else 
    {
        cout<<"Not palindrome!"<<endl;
    }
    return 0;

}