#include<iostream>
int check_Armstrong(int);
using namespace std;
int main()
{
 int n;
 cout<<"Enter Any positive Number:";
 cin>>n;
 check_Armstrong(n);
}
int check_Armstrong(int n)
{
    int sum=0,temp,rem;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<"Armstrong!"<<endl;
    }
    else
    {
        cout<<"Not Armstrong!"<<endl;
    }
    return 0;
}
