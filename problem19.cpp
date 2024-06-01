//19. WAP in C++ to find sum of array elements.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50},sum=0,i;
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of Array: "<<sum<<endl;
    return 0;

}