//21. Write a program in C++ to print the sum of digits of a number using a for loop
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum+=i;
    }
    cout<<"Sum is: "<<sum<<endl;

}
