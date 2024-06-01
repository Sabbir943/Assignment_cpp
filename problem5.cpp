#include<iostream>
bool is_prime(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter any positive number:";
    cin>>n;
    bool check=is_prime(n);
    if(true)
    {
        cout<<n<<" "<<"is perfect number."<<endl;
    }
    else
        cout<<n<<" "<<"is not perfect number."<<endl;

}
bool is_prime(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
        return true;
    else
        return false;
}
