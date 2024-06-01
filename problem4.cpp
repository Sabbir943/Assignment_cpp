#include<iostream>
using namespace std;
int prime_check(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    prime_check(n);

}
int prime_check(int n)
{
    int count=0;
    if(n==0||n==1)
    {
        count++;
        
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<n<<" "<<"is a prime number."<<endl;
    }
    else
    {
        cout<<n<<" "<<"is not a prime number."<<endl;
    }
    return 0;

}