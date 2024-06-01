/*23. Write a program to find GCD (greatest common divisor or HCF) and LCM (least common
multiple) of two numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,rem,gcd,lcm,num1,num2;
    cout<<"Enter two Numbers: ";
    cin>>num1>>num2;
    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    cout<<"GCD :"<<gcd<<endl;
    cout<<"LCM :"<<lcm<<endl;
}